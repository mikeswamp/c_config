/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#include "VasCode.h"

int
VasCode_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_Code.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using Code,
 * so here we adjust the DEF accordingly.
 */
static void
VasCode_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_Code.free_struct;
	td->print_struct   = asn_DEF_Code.print_struct;
	td->ber_decoder    = asn_DEF_Code.ber_decoder;
	td->der_encoder    = asn_DEF_Code.der_encoder;
	td->xer_decoder    = asn_DEF_Code.xer_decoder;
	td->xer_encoder    = asn_DEF_Code.xer_encoder;
	td->uper_decoder   = asn_DEF_Code.uper_decoder;
	td->uper_encoder   = asn_DEF_Code.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_Code.per_constraints;
	td->elements       = asn_DEF_Code.elements;
	td->elements_count = asn_DEF_Code.elements_count;
	td->specifics      = asn_DEF_Code.specifics;
}

void
VasCode_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	VasCode_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
VasCode_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	VasCode_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
VasCode_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	VasCode_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
VasCode_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	VasCode_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
VasCode_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	VasCode_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
VasCode_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	VasCode_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static ber_tlv_tag_t asn_DEF_VasCode_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (237 << 2)),
	(ASN_TAG_CLASS_APPLICATION | (243 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_VasCode = {
	"VasCode",
	"VasCode",
	VasCode_free,
	VasCode_print,
	VasCode_constraint,
	VasCode_decode_ber,
	VasCode_encode_der,
	VasCode_decode_xer,
	VasCode_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VasCode_tags_1,
	sizeof(asn_DEF_VasCode_tags_1)
		/sizeof(asn_DEF_VasCode_tags_1[0]) - 2, /* 1 */
	asn_DEF_VasCode_tags_1,	/* Same as above */
	sizeof(asn_DEF_VasCode_tags_1)
		/sizeof(asn_DEF_VasCode_tags_1[0]), /* 3 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

