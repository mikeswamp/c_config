/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#ifndef	_InitiatingParty_H_
#define	_InitiatingParty_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InitiatingParty */
typedef INTEGER_t	 InitiatingParty_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitiatingParty;
asn_struct_free_f InitiatingParty_free;
asn_struct_print_f InitiatingParty_print;
asn_constr_check_f InitiatingParty_constraint;
ber_type_decoder_f InitiatingParty_decode_ber;
der_type_encoder_f InitiatingParty_encode_der;
xer_type_decoder_f InitiatingParty_decode_xer;
xer_type_encoder_f InitiatingParty_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _InitiatingParty_H_ */
#include <asn_internal.h>
