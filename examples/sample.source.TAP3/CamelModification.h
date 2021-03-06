/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#ifndef	_CamelModification_H_
#define	_CamelModification_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CamelModification */
typedef INTEGER_t	 CamelModification_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CamelModification;
asn_struct_free_f CamelModification_free;
asn_struct_print_f CamelModification_print;
asn_constr_check_f CamelModification_constraint;
ber_type_decoder_f CamelModification_decode_ber;
der_type_encoder_f CamelModification_encode_der;
xer_type_decoder_f CamelModification_decode_xer;
xer_type_encoder_f CamelModification_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CamelModification_H_ */
#include <asn_internal.h>
