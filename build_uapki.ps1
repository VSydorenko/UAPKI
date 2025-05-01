# Скрипт для сборки проекта UAPKI
# powershell -ExecutionPolicy Bypass -File build_uapki.ps1 [-WithTests]
#
# Обычная сборка для x64 (версия 64-бит)
#./build_uapki.ps1
#
# Сборка для x86 (версия 32-бит)
#./build_uapki.ps1 -Arch x86
#
# Сборка со статической библиотекой UAPKI
#./build_uapki.ps1 -StaticUapki
#
# Сборка с динамической библиотекой CM-PKCS12
#./build_uapki.ps1 -DynamicCmPkcs12
#
# Добавление тестов к любой из конфигураций
#./build_uapki.ps1 -StaticUapki -DynamicCmPkcs12 -WithTests

param(
    [string]$Arch = "x64",    # Архитектура сборки: x64 (по умолчанию) или x86
    [switch]$WithTests,        # Включить тесты
    [switch]$StaticUapki,      # Собрать статические библиотеки UAPKI
    [switch]$DynamicCmPkcs12   # Собрать динамическую библиотеку CM-PKCS12
)

# --- Переход в директорию скрипта ---
$ScriptDir = Split-Path -Parent $MyInvocation.MyCommand.Definition
Set-Location $ScriptDir

# Определение параметров архитектуры для CMake
$cmakeArch = if ($Arch -eq "x86") { "Win32" } else { "x64" }

# --- Переход в директорию library, где находится основной CMakeLists.txt ---
Set-Location "$ScriptDir\library"
$LibraryDir = Get-Location

# Определение директории сборки
$BuildDir = "build"

# Определение унифицированной выходной директории (как в оригинальных скриптах)
$OutDir = "out" # Основная выходная директория на уровне library

# Создание или очистка директории сборки
if (Test-Path -Path $BuildDir) {
    Write-Host "Cleaning build directory: $BuildDir" -ForegroundColor Cyan
    # Удаляем всё содержимое, но сохраняем саму директорию
    Remove-Item -Path "$BuildDir\*" -Recurse -Force -ErrorAction SilentlyContinue
} else {
    Write-Host "Creating build directory: $BuildDir" -ForegroundColor Cyan
    New-Item -Path $BuildDir -ItemType Directory -Force | Out-Null
}

# Создание или очистка выходной директории
if (Test-Path -Path $OutDir) {
    Write-Host "Cleaning output directory: $OutDir" -ForegroundColor Cyan
    # Удаляем всё содержимое, но сохраняем саму директорию
    Remove-Item -Path "$OutDir\*" -Recurse -Force -ErrorAction SilentlyContinue
} else {
    Write-Host "Creating output directory: $OutDir" -ForegroundColor Cyan
    New-Item -Path $OutDir -ItemType Directory -Force | Out-Null
}

# Определение параметров для CMake
$cmakeParams = @()

# Добавляем параметр для тестов
if ($WithTests) {
    $cmakeParams += "-DBUILD_TESTS=ON"
    Write-Host "Test suite will be built" -ForegroundColor Green
} else {
    $cmakeParams += "-DBUILD_TESTS=OFF"
    Write-Host "Test suite disabled" -ForegroundColor Yellow
}

# Добавляем параметры для статической библиотеки UAPKI
if ($StaticUapki) {
    $cmakeParams += "-DUAPKI_LIB_TYPE=STATIC"
    $cmakeParams += "-DUAPKIC_LIB_TYPE=STATIC"
    $cmakeParams += "-DUAPKIF_LIB_TYPE=STATIC"
    Write-Host "Building UAPKI as a static library" -ForegroundColor Green
}

# Добавляем параметры для динамической библиотеки CM-PKCS12
if ($DynamicCmPkcs12) {
    $cmakeParams += "-DUAPKI_CM_PKCS12_LIB_TYPE=SHARED"
    Write-Host "Building CM-PKCS12 as a dynamic library" -ForegroundColor Green
}

# Добавляем параметр выходной директории
$cmakeParams += "-DOUT_DIR=win32"
$cmakeParams += "-DUAPKI_DISABLE_COPY=OFF" # Разрешаем копирование в выходную директорию

# Путь к локальной библиотеке curl из проекта
$localCurlIncludeDir = "$LibraryDir\common\curl\include"
$localCurlLibPath = "$LibraryDir\common\curl\builds\windows_x86-64\libcurl.lib"

# Добавляем параметры для локального curl
$cmakeParams += "-DCURL_INCLUDE_DIR=$localCurlIncludeDir"
$cmakeParams += "-DCURL_LIBRARY=$localCurlLibPath"

# Добавляем дополнительные флаги компилятора для статической линковки с curl
$cmakeParams += "-DCMAKE_CXX_FLAGS=""-DCURL_STATICLIB"""
$cmakeParams += "-DCMAKE_C_FLAGS=""-DCURL_STATICLIB"""

# Добавляем необходимые системные библиотеки Windows для работы с curl
# Отключаем вывод подробного лога поиска библиотек
$cmakeParams += "-DCMAKE_EXE_LINKER_FLAGS=""ws2_32.lib wldap32.lib crypt32.lib normaliz.lib advapi32.lib"""
$cmakeParams += "-DCMAKE_SHARED_LINKER_FLAGS=""ws2_32.lib wldap32.lib crypt32.lib normaliz.lib advapi32.lib"""

# Генерация проекта
Write-Host "Generating project for $Arch in $BuildDir..." -ForegroundColor Cyan
$cmakeCommand = "cmake -G ""Visual Studio 17 2022"" -A $cmakeArch -S . -B $BuildDir $($cmakeParams -join ' ')"
Write-Host "Running: $cmakeCommand" -ForegroundColor DarkCyan
Invoke-Expression $cmakeCommand

if (-Not $?) {
    Write-Host "Error generating CMake project for $Arch" -ForegroundColor Red
    exit 1
}

# Сборка проекта
Write-Host "Building project for $Arch in Release mode..." -ForegroundColor Cyan
$buildCommand = "cmake --build $BuildDir --config Release"
Write-Host "Running: $buildCommand" -ForegroundColor DarkCyan
Invoke-Expression $buildCommand

if (-Not $?) {
    Write-Host "Some errors occurred during build, but we'll check results anyway" -ForegroundColor Yellow
}

# Проверка результатов сборки в основной выходной директории
Write-Host "Checking files in main output directory: $OutDir" -ForegroundColor Cyan
if (Test-Path -Path $OutDir) {
    $outputFiles = Get-ChildItem -Path $OutDir -Recurse -File -ErrorAction SilentlyContinue
    if ($outputFiles) {
        Write-Host "Files found in output directory:" -ForegroundColor Green
        foreach ($file in $outputFiles) {
            Write-Host "- $($file.Name)" -ForegroundColor Green
        }
    } else {
        Write-Host "No files found in output directory" -ForegroundColor Yellow
    }
} else {
    Write-Host "Output directory not found: $OutDir" -ForegroundColor Red
}

# Проверка файлов в Release директории
$releaseDir = "$LibraryDir\$BuildDir\Release"
if (Test-Path -Path $releaseDir) {
    $releaseFiles = Get-ChildItem -Path $releaseDir -File -ErrorAction SilentlyContinue
    if ($releaseFiles) {
        Write-Host "Files found in Release directory:" -ForegroundColor Green
        foreach ($file in $releaseFiles) {
            Write-Host "- $($file.Name)" -ForegroundColor Green
        }
        
        # Копируем все файлы из Release в основную выходную директорию,
        # если они еще не были скопированы через CMake
        Write-Host "Ensuring all release files are in output directory..." -ForegroundColor Cyan
        foreach ($file in $releaseFiles) {
            if (-Not (Test-Path -Path "$OutDir\$($file.Name)")) {
                Copy-Item -Path $file.FullName -Destination "$OutDir\" -Force
                Write-Host "Copied $($file.Name) to output directory" -ForegroundColor Green
            }
        }
    } else {
        Write-Host "No files found in Release directory" -ForegroundColor Yellow
    }
} else {
    Write-Host "Release directory not found: $releaseDir" -ForegroundColor Yellow
}

Write-Host "Build process completed!" -ForegroundColor Green

# Возвращаемся в исходную директорию
Set-Location $ScriptDir