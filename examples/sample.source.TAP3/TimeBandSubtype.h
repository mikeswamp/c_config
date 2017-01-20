/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#ifndef	_TimeBandSubtype_H_
#define	_TimeBandSubtype_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AsciiString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TimeBandSubtype */
typedef AsciiString_t	 TimeBandSubtype_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeBandSubtype;
asn_struct_free_f TimeBandSubtype_free;
asn_struct_print_f TimeBandSubtype_print;
asn_constr_check_f TimeBandSubtype_constraint;
ber_type_decoder_f TimeBandSubtype_decode_ber;
der_type_encoder_f TimeBandSubtype_encode_der;
xer_type_decoder_f TimeBandSubtype_decode_xer;
xer_type_encoder_f TimeBandSubtype_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeBandSubtype_H_ */
#include <asn_internal.h>