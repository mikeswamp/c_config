/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#ifndef	_QoSRequested_H_
#define	_QoSRequested_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GSMQoSRequested.h"
#include "UMTSQoSRequested.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum QoSRequested_PR {
	QoSRequested_PR_NOTHING,	/* No components present */
	QoSRequested_PR_gsmQoSRequested,
	QoSRequested_PR_umtsQoSRequested
} QoSRequested_PR;

/* QoSRequested */
typedef struct QoSRequested {
	QoSRequested_PR present;
	union QoSRequested_u {
		GSMQoSRequested_t	 gsmQoSRequested;
		UMTSQoSRequested_t	 umtsQoSRequested;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QoSRequested_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QoSRequested;

#ifdef __cplusplus
}
#endif

#endif	/* _QoSRequested_H_ */
#include <asn_internal.h>
