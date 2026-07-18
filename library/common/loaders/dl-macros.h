/*
 * Copyright (c) 2021, The UAPKI Project Authors.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef DL_MACROS_H
#define DL_MACROS_H


#ifdef __cplusplus
extern "C" {
#endif


#if defined(_WIN32) || defined(__WINDOWS__)
#include <windows.h>
#include <stdlib.h>
typedef HMODULE HANDLE_DLIB;
#define LIBNAME_PREFIX ""
#define LIBNAME_EXT "dll"
#define DL_LOAD_LIBRARY(fn) LoadLibraryA(fn)
#define DL_GET_PROC_ADDRESS(h, fname) GetProcAddress((HANDLE_DLIB)h, fname)
#define DL_FREE_LIBRARY(h) FreeLibrary((HANDLE_DLIB)h);

/* Load a library from a UTF-8 path: converts to UTF-16 and uses LoadLibraryW,
 * so paths with non-ASCII (e.g. Cyrillic) characters are handled correctly
 * regardless of the active ANSI code page. */
static HANDLE_DLIB dl_load_library_utf8(const char* fn_utf8) {
    int wlen = MultiByteToWideChar(CP_UTF8, 0, fn_utf8, -1, NULL, 0);
    if (wlen <= 0) return (HANDLE_DLIB)0;
    wchar_t* wbuf = (wchar_t*)malloc((size_t)wlen * sizeof(wchar_t));
    if (!wbuf) return (HANDLE_DLIB)0;
    MultiByteToWideChar(CP_UTF8, 0, fn_utf8, -1, wbuf, wlen);
    HANDLE_DLIB h = LoadLibraryW(wbuf);
    free(wbuf);
    return h;
}

#elif defined(__linux__) || defined(__APPLE__) || defined(__unix__)
#include <dlfcn.h>
typedef void* HANDLE_DLIB;
#define LIBNAME_PREFIX "lib"
#if defined(__APPLE__)
#define LIBNAME_EXT "dylib"
#else
#define LIBNAME_EXT "so"
#endif
#define DL_LOAD_LIBRARY(fn) dlopen(fn, RTLD_NOW)
#define dl_load_library_utf8(fn) DL_LOAD_LIBRARY(fn)
#define DL_GET_PROC_ADDRESS(h, fname) dlsym((HANDLE_DLIB)h, fname)
#define DL_FREE_LIBRARY(h) dlclose((HANDLE_DLIB)h);

#else
#error "Target platform undefined"
#endif

#ifdef __cplusplus
}
#endif

#endif
