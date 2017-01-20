/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0310"
 * 	found in "../tap3.asn1"
 * 	`asn1c -S ../../skeletons`
 */

#ifndef	_TotalChargeValue_H_
#define	_TotalChargeValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ChargeType.h"
#include "AbsoluteAmount.h"
#include "TotalChargeRefund.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TotalChargeValue */
typedef struct TotalChargeValue {
	ChargeType_t	*chargeType	/* OPTIONAL */;
	AbsoluteAmount_t	*totalCharge	/* OPTIONAL */;
	TotalChargeRefund_t	*totalChargeRefund	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TotalChargeValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TotalChargeValue;

#ifdef __cplusplus
}
#endif

#endif	/* _TotalChargeValue_H_ */
#include <asn_internal.h>