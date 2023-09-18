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

#define FILE_MARKER "uapkif/struct/TSAPolicyId.c"

#include "TSAPolicyId.h"

#include "asn_internal.h"

int
TSAPolicyId_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
        asn_app_constraint_failed_f *ctfailcb, void *app_key)
{
    /* Replace with underlying type checker */
    td->check_constraints = OBJECT_IDENTIFIER_desc.check_constraints;
    return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using OBJECT_IDENTIFIER,
 * so here we adjust the DEF accordingly.
 */
static void
TSAPolicyId_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td)
{
    td->free_struct    = OBJECT_IDENTIFIER_desc.free_struct;
    td->print_struct   = OBJECT_IDENTIFIER_desc.print_struct;
    td->check_constraints = OBJECT_IDENTIFIER_desc.check_constraints;
    td->ber_decoder    = OBJECT_IDENTIFIER_desc.ber_decoder;
    td->der_encoder    = OBJECT_IDENTIFIER_desc.der_encoder;
    td->xer_decoder    = OBJECT_IDENTIFIER_desc.xer_decoder;
    td->xer_encoder    = OBJECT_IDENTIFIER_desc.xer_encoder;
    td->uper_decoder   = OBJECT_IDENTIFIER_desc.uper_decoder;
    td->uper_encoder   = OBJECT_IDENTIFIER_desc.uper_encoder;
    if (!td->per_constraints) {
        td->per_constraints = OBJECT_IDENTIFIER_desc.per_constraints;
    }
    td->elements       = OBJECT_IDENTIFIER_desc.elements;
    td->elements_count = OBJECT_IDENTIFIER_desc.elements_count;
    td->specifics      = OBJECT_IDENTIFIER_desc.specifics;
}

void
TSAPolicyId_free(asn_TYPE_descriptor_t *td,
        void *struct_ptr, int contents_only)
{
    TSAPolicyId_1_inherit_TYPE_descriptor(td);
    td->free_struct(td, struct_ptr, contents_only);
}

int
TSAPolicyId_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
        int ilevel, asn_app_consume_bytes_f *cb, void *app_key)
{
    TSAPolicyId_1_inherit_TYPE_descriptor(td);
    return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
TSAPolicyId_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
        void **structure, const void *bufptr, size_t size, int tag_mode)
{
    TSAPolicyId_1_inherit_TYPE_descriptor(td);
    return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
TSAPolicyId_encode_der(asn_TYPE_descriptor_t *td,
        void *structure, int tag_mode, ber_tlv_tag_t tag,
        asn_app_consume_bytes_f *cb, void *app_key)
{
    TSAPolicyId_1_inherit_TYPE_descriptor(td);
    return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
TSAPolicyId_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
        void **structure, const char *opt_mname, const void *bufptr, size_t size)
{
    TSAPolicyId_1_inherit_TYPE_descriptor(td);
    return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
TSAPolicyId_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
        int ilevel, enum xer_encoder_flags_e flags,
        asn_app_consume_bytes_f *cb, void *app_key)
{
    TSAPolicyId_1_inherit_TYPE_descriptor(td);
    return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static const ber_tlv_tag_t TSAPolicyId_desc_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (6 << 2))
};
asn_TYPE_descriptor_t TSAPolicyId_desc = {
    "TSAPolicyId",
    "TSAPolicyId",
    TSAPolicyId_free,
    TSAPolicyId_print,
    TSAPolicyId_constraint,
    TSAPolicyId_decode_ber,
    TSAPolicyId_encode_der,
    TSAPolicyId_decode_xer,
    TSAPolicyId_encode_xer,
    0, 0,    /* No PER support, use "-gen-PER" to enable */
    0,    /* Use generic outmost tag fetcher */
    TSAPolicyId_desc_tags_1,
    sizeof(TSAPolicyId_desc_tags_1)
    / sizeof(TSAPolicyId_desc_tags_1[0]), /* 1 */
    TSAPolicyId_desc_tags_1,    /* Same as above */
    sizeof(TSAPolicyId_desc_tags_1)
    / sizeof(TSAPolicyId_desc_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    0, 0,    /* No members */
    0    /* No specifics */
};

asn_TYPE_descriptor_t *get_TSAPolicyId_desc(void)
{
    return &TSAPolicyId_desc;
}


