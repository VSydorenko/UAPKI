/*
 * Copyright (c) 2023, The UAPKI Project Authors.
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
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

#define FILE_MARKER "uapkif/struct/PKIBody.c"

#include "PKIBody.h"

#include "asn_internal.h"

static asn_TYPE_member_t asn_MBR_PKIBody_1[] = {
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.ir),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "ir"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.ip),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "ip"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.cr),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "cr"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.cp),
        (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "cp"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.p10cr),
        (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "p10cr"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.popdecc),
        (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "popdecc"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.popdecr),
        (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "popdecr"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.kur),
        (ASN_TAG_CLASS_CONTEXT | (7 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "kur"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.kup),
        (ASN_TAG_CLASS_CONTEXT | (8 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "kup"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.krr),
        (ASN_TAG_CLASS_CONTEXT | (9 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "krr"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.krp),
        (ASN_TAG_CLASS_CONTEXT | (10 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "krp"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.rr),
        (ASN_TAG_CLASS_CONTEXT | (11 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "rr"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.rp),
        (ASN_TAG_CLASS_CONTEXT | (12 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "rp"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.ccr),
        (ASN_TAG_CLASS_CONTEXT | (13 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "ccr"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.ccp),
        (ASN_TAG_CLASS_CONTEXT | (14 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "ccp"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.ckuann),
        (ASN_TAG_CLASS_CONTEXT | (15 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "ckuann"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.cann),
        (ASN_TAG_CLASS_CONTEXT | (16 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "cann"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.rann),
        (ASN_TAG_CLASS_CONTEXT | (17 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "rann"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.crlann),
        (ASN_TAG_CLASS_CONTEXT | (18 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "crlann"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.pkiconf),
        (ASN_TAG_CLASS_CONTEXT | (19 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "pkiconf"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.nested),
        (ASN_TAG_CLASS_CONTEXT | (20 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "nested"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.genm),
        (ASN_TAG_CLASS_CONTEXT | (21 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "genm"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.genp),
        (ASN_TAG_CLASS_CONTEXT | (22 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "genp"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.error),
        (ASN_TAG_CLASS_CONTEXT | (23 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "error"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.certConf),
        (ASN_TAG_CLASS_CONTEXT | (24 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "certConf"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.pollReq),
        (ASN_TAG_CLASS_CONTEXT | (25 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "pollReq"
        },
    { ATF_NOFLAGS, 0, offsetof(struct PKIBody, choice.pollRep),
        (ASN_TAG_CLASS_CONTEXT | (26 << 2)),
        +1,	/* EXPLICIT tag at current level */
        &ANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "pollRep"
        },
};
static const asn_TYPE_tag2member_t asn_MAP_PKIBody_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ir */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ip */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cr */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cp */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* p10cr */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* popdecc */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* popdecr */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* kur */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* kup */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* krr */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* krp */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* rr */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* rp */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ccr */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* ccp */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* ckuann */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* cann */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* rann */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* crlann */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* pkiconf */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* nested */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* genm */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* genp */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* error */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* certConf */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* pollReq */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 } /* pollRep */
};
static asn_CHOICE_specifics_t asn_SPC_PKIBody_specs_1 = {
    sizeof(struct PKIBody),
    offsetof(struct PKIBody, _asn_ctx),
    offsetof(struct PKIBody, present),
    sizeof(((struct PKIBody *)0)->present),
    asn_MAP_PKIBody_tag2el_1,
    27,	/* Count of tags in the map */
    0,
    -1	/* Extensions start */
};
asn_TYPE_descriptor_t PKIBody_desc = {
    "PKIBody",
    "PKIBody",
    CHOICE_free,
    CHOICE_print,
    CHOICE_constraint,
    CHOICE_decode_ber,
    CHOICE_encode_der,
    CHOICE_decode_xer,
    CHOICE_encode_xer,
    0, 0,	/* No PER support, use "-gen-PER" to enable */
    CHOICE_outmost_tag,
    0,	/* No effective tags (pointer) */
    0,	/* No effective tags (count) */
    0,	/* No tags (pointer) */
    0,	/* No tags (count) */
    0,	/* No PER visible constraints */
    asn_MBR_PKIBody_1,
    27,	/* Elements count */
    &asn_SPC_PKIBody_specs_1	/* Additional specs */
};

asn_TYPE_descriptor_t* get_PKIBody_desc(void)
{
    return &PKIBody_desc;
}


