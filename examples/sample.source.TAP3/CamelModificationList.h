/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#ifndef	_CamelModificationList_H_
#define	_CamelModificationList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CamelModification.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CamelModificationList */
typedef struct CamelModificationList {
	A_SEQUENCE_OF(CamelModification_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CamelModificationList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CamelModificationList;

#ifdef __cplusplus
}
#endif

#endif	/* _CamelModificationList_H_ */
#include <asn_internal.h>