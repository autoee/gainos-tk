/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-06-14:13-33-26.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */


#ifndef PDUR_PB_CFG_H_H
#define PDUR_PB_CFG_H_H
#if !(((PDUR_SW_MAJOR_VERSION == 2) && (PDUR_SW_MINOR_VERSION == 0)) )
#error PduR: Configuration file expected BSW module version to be 2.0.*
#endif

#include "Dcm.h"
#include "Com.h"
#include "CanIf.h"
#include "CanTp.h"

extern const PduR_PBConfigType PduR_Config;
//  PduR Polite Defines.
/* PduR Rx NSdu Id */
#define PDUR_RX_vEcuC_Pdu_1 COM_RX_vEcuC_Pdu_1
/* PduR Tx NSdu Id */
#define PDUR_TX_vEcuC_Pdu_1 CANIF_TX_vEcuC_Pdu_1
#define PDUR_ALT_TX_vEcuC_Pdu_1 COM_TX_vEcuC_Pdu_1
#endif /* PDUR_PB_CFG_H_H */

