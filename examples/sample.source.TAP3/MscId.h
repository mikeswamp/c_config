/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#ifndef	_MscId_H_
#define	_MscId_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AsciiString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MscId */
typedef AsciiString_t	 MscId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MscId;
asn_struct_free_f MscId_free;
asn_struct_print_f MscId_print;
asn_constr_check_f MscId_constraint;
ber_type_decoder_f MscId_decode_ber;
der_type_encoder_f MscId_encode_der;
xer_type_decoder_f MscId_decode_xer;
xer_type_encoder_f MscId_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _MscId_H_ */
#include <asn_internal.h>