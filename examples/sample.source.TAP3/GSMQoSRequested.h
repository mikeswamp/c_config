/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#ifndef	_GSMQoSRequested_H_
#define	_GSMQoSRequested_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GSMQoSInformation.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GSMQoSRequested */
typedef GSMQoSInformation_t	 GSMQoSRequested_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSMQoSRequested;
asn_struct_free_f GSMQoSRequested_free;
asn_struct_print_f GSMQoSRequested_print;
asn_constr_check_f GSMQoSRequested_constraint;
ber_type_decoder_f GSMQoSRequested_decode_ber;
der_type_encoder_f GSMQoSRequested_encode_der;
xer_type_decoder_f GSMQoSRequested_decode_xer;
xer_type_encoder_f GSMQoSRequested_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _GSMQoSRequested_H_ */
#include <asn_internal.h>