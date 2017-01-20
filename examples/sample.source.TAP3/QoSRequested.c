/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#include "QoSRequested.h"

static asn_TYPE_member_t asn_MBR_QoSRequested_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct QoSRequested, choice.gsmQoSRequested),
		(ASN_TAG_CLASS_APPLICATION | (272 << 2)),
		0,
		&asn_DEF_GSMQoSRequested,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gsmQoSRequested"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct QoSRequested, choice.umtsQoSRequested),
		(ASN_TAG_CLASS_APPLICATION | (270 << 2)),
		0,
		&asn_DEF_UMTSQoSRequested,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"umtsQoSRequested"
		},
};
static asn_TYPE_tag2member_t asn_MAP_QoSRequested_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (270 << 2)), 1, 0, 0 }, /* umtsQoSRequested at 1130 */
    { (ASN_TAG_CLASS_APPLICATION | (272 << 2)), 0, 0, 0 } /* gsmQoSRequested at 1128 */
};
static asn_CHOICE_specifics_t asn_SPC_QoSRequested_specs_1 = {
	sizeof(struct QoSRequested),
	offsetof(struct QoSRequested, _asn_ctx),
	offsetof(struct QoSRequested, present),
	sizeof(((struct QoSRequested *)0)->present),
	asn_MAP_QoSRequested_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_QoSRequested = {
	"QoSRequested",
	"QoSRequested",
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
	asn_MBR_QoSRequested_1,
	2,	/* Elements count */
	&asn_SPC_QoSRequested_specs_1	/* Additional specs */
};
