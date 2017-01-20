/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#ifndef	_SpeechVersion_H_
#define	_SpeechVersion_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SpeechVersion */
typedef INTEGER_t	 SpeechVersion_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpeechVersion;
asn_struct_free_f SpeechVersion_free;
asn_struct_print_f SpeechVersion_print;
asn_constr_check_f SpeechVersion_constraint;
ber_type_decoder_f SpeechVersion_decode_ber;
der_type_encoder_f SpeechVersion_encode_der;
xer_type_decoder_f SpeechVersion_decode_xer;
xer_type_encoder_f SpeechVersion_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeechVersion_H_ */
#include <asn_internal.h>