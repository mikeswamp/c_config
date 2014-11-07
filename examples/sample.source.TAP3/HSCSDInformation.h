/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#ifndef	_HSCSDInformation_H_
#define	_HSCSDInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BasicHSCSDParameters;
struct HSCSDParameterModificationList;

/* HSCSDInformation */
typedef struct HSCSDInformation {
	struct BasicHSCSDParameters	*basicHSCSDParameters	/* OPTIONAL */;
	struct HSCSDParameterModificationList	*hSCSDParameterModificationList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HSCSDInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HSCSDInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BasicHSCSDParameters.h"
#include "HSCSDParameterModificationList.h"

#endif	/* _HSCSDInformation_H_ */
#include <asn_internal.h>
