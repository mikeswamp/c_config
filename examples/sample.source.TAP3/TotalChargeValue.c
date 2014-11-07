/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#include "TotalChargeValue.h"

static asn_TYPE_member_t asn_MBR_TotalChargeValue_1[] = {
	{ ATF_POINTER, 3, offsetof(struct TotalChargeValue, chargeType),
		(ASN_TAG_CLASS_APPLICATION | (71 << 2)),
		0,
		&asn_DEF_ChargeType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chargeType"
		},
	{ ATF_POINTER, 2, offsetof(struct TotalChargeValue, totalCharge),
		(ASN_TAG_CLASS_APPLICATION | (241 << 2)),
		0,
		&asn_DEF_AbsoluteAmount,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"totalCharge"
		},
	{ ATF_POINTER, 1, offsetof(struct TotalChargeValue, totalChargeRefund),
		(ASN_TAG_CLASS_APPLICATION | (355 << 2)),
		0,
		&asn_DEF_TotalChargeRefund,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"totalChargeRefund"
		},
};
static ber_tlv_tag_t asn_DEF_TotalChargeValue_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (222 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_TotalChargeValue_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (71 << 2)), 0, 0, 0 }, /* chargeType at 1334 */
    { (ASN_TAG_CLASS_APPLICATION | (241 << 2)), 1, 0, 0 }, /* totalCharge at 1335 */
    { (ASN_TAG_CLASS_APPLICATION | (355 << 2)), 2, 0, 0 } /* totalChargeRefund at 1336 */
};
static asn_SEQUENCE_specifics_t asn_SPC_TotalChargeValue_specs_1 = {
	sizeof(struct TotalChargeValue),
	offsetof(struct TotalChargeValue, _asn_ctx),
	asn_MAP_TotalChargeValue_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TotalChargeValue = {
	"TotalChargeValue",
	"TotalChargeValue",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TotalChargeValue_tags_1,
	sizeof(asn_DEF_TotalChargeValue_tags_1)
		/sizeof(asn_DEF_TotalChargeValue_tags_1[0]) - 1, /* 1 */
	asn_DEF_TotalChargeValue_tags_1,	/* Same as above */
	sizeof(asn_DEF_TotalChargeValue_tags_1)
		/sizeof(asn_DEF_TotalChargeValue_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_TotalChargeValue_1,
	3,	/* Elements count */
	&asn_SPC_TotalChargeValue_specs_1	/* Additional specs */
};

