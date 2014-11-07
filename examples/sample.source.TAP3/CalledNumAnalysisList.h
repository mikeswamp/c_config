/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#ifndef	_CalledNumAnalysisList_H_
#define	_CalledNumAnalysisList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CalledNumAnalysis;

/* CalledNumAnalysisList */
typedef struct CalledNumAnalysisList {
	A_SEQUENCE_OF(struct CalledNumAnalysis) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CalledNumAnalysisList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CalledNumAnalysisList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CalledNumAnalysis.h"

#endif	/* _CalledNumAnalysisList_H_ */
#include <asn_internal.h>
