/*
 * Copyright 2021 The UAPKI Project Authors.
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

#define FILE_MARKER "uapkif/struct/SigningCertificateV2.c"

#include "SigningCertificateV2.h"

#include "asn_internal.h"

#include "ESSCertIDv2.h"
#include "PolicyInformation.h"

static asn_TYPE_member_t asn_MBR_certs_2[] = {
    {
        ATF_POINTER, 0, 0,
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
        0,
        &ESSCertIDv2_desc,
        0,    /* Defer constraints checking to the member type */
        0,    /* PER is not compiled, use -gen-PER */
        0,
        ""
    },
};
static const ber_tlv_tag_t certs_desc_tags_2[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_certs_specs_2 = {
    sizeof(struct certs),
    offsetof(struct certs, _asn_ctx),
    0,    /* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t certs_2_desc = {
    "certs",
    "certs",
    SEQUENCE_OF_free,
    SEQUENCE_OF_print,
    SEQUENCE_OF_constraint,
    SEQUENCE_OF_decode_ber,
    SEQUENCE_OF_encode_der,
    SEQUENCE_OF_decode_xer,
    SEQUENCE_OF_encode_xer,
    0, 0,    /* No PER support, use "-gen-PER" to enable */
    0,    /* Use generic outmost tag fetcher */
    certs_desc_tags_2,
    sizeof(certs_desc_tags_2)
    / sizeof(certs_desc_tags_2[0]), /* 1 */
    certs_desc_tags_2,    /* Same as above */
    sizeof(certs_desc_tags_2)
    / sizeof(certs_desc_tags_2[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_certs_2,
    1,    /* Single element */
    &asn_SPC_certs_specs_2    /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_policies_4[] = {
    {
        ATF_POINTER, 0, 0,
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
        0,
        &PolicyInformation_desc,
        0,    /* Defer constraints checking to the member type */
        0,    /* PER is not compiled, use -gen-PER */
        0,
        ""
    },
};
static const ber_tlv_tag_t policies_desc_tags_4[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_policies_specs_4 = {
    sizeof(struct policies),
    offsetof(struct policies, _asn_ctx),
    0,    /* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t policies_4_desc = {
    "policies",
    "policies",
    SEQUENCE_OF_free,
    SEQUENCE_OF_print,
    SEQUENCE_OF_constraint,
    SEQUENCE_OF_decode_ber,
    SEQUENCE_OF_encode_der,
    SEQUENCE_OF_decode_xer,
    SEQUENCE_OF_encode_xer,
    0, 0,    /* No PER support, use "-gen-PER" to enable */
    0,    /* Use generic outmost tag fetcher */
    policies_desc_tags_4,
    sizeof(policies_desc_tags_4)
    / sizeof(policies_desc_tags_4[0]), /* 1 */
    policies_desc_tags_4,    /* Same as above */
    sizeof(policies_desc_tags_4)
    / sizeof(policies_desc_tags_4[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_policies_4,
    1,    /* Single element */
    &asn_SPC_policies_specs_4    /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SigningCertificateV2_1[] = {
    {
        ATF_NOFLAGS, 0, offsetof(struct SigningCertificateV2, certs),
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
        0,
        &certs_2_desc,
        0,    /* Defer constraints checking to the member type */
        0,    /* PER is not compiled, use -gen-PER */
        0,
        "certs"
    },
    {
        ATF_POINTER, 1, offsetof(struct SigningCertificateV2, policies),
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
        0,
        &policies_4_desc,
        0,    /* Defer constraints checking to the member type */
        0,    /* PER is not compiled, use -gen-PER */
        0,
        "policies"
    },
};
static const ber_tlv_tag_t SigningCertificateV2_desc_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SigningCertificateV2_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* certs */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 } /* policies */
};
static asn_SEQUENCE_specifics_t asn_SPC_SigningCertificateV2_specs_1 = {
    sizeof(struct SigningCertificateV2),
    offsetof(struct SigningCertificateV2, _asn_ctx),
    asn_MAP_SigningCertificateV2_tag2el_1,
    2,    /* Count of tags in the map */
    0, 0, 0,    /* Optional elements (not needed) */
    -1,    /* Start extensions */
    -1    /* Stop extensions */
};
asn_TYPE_descriptor_t SigningCertificateV2_desc = {
    "SigningCertificateV2",
    "SigningCertificateV2",
    SEQUENCE_free,
    SEQUENCE_print,
    SEQUENCE_constraint,
    SEQUENCE_decode_ber,
    SEQUENCE_encode_der,
    SEQUENCE_decode_xer,
    SEQUENCE_encode_xer,
    0, 0,    /* No PER support, use "-gen-PER" to enable */
    0,    /* Use generic outmost tag fetcher */
    SigningCertificateV2_desc_tags_1,
    sizeof(SigningCertificateV2_desc_tags_1)
    / sizeof(SigningCertificateV2_desc_tags_1[0]), /* 1 */
    SigningCertificateV2_desc_tags_1,    /* Same as above */
    sizeof(SigningCertificateV2_desc_tags_1)
    / sizeof(SigningCertificateV2_desc_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_SigningCertificateV2_1,
    2,    /* Elements count */
    &asn_SPC_SigningCertificateV2_specs_1    /* Additional specs */
};

asn_TYPE_descriptor_t *get_SigningCertificateV2_desc(void)
{
    return &SigningCertificateV2_desc;
}


