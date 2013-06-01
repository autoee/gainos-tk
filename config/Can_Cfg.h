/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-06-01:21-08-38.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */

#ifndef CAN_CFG_H_
#define CAN_CFG_H_

/* ################ Can General ################ */
#define CAN_DEV_ERROR_DETECT STD_ON
#define CAN_VERSION_INFO_API STD_OFF
#define CAN_TIMEOUT_DURATION 10 /* ms */

/* Number of controller configs */
#define CAN_CTRL_CONFIG_CNT 2

/* Info used by CanIF,index of configure in Can_ControllerCfgData[] */
#define INDEX_OF_CAN_CTRL_1 0
#define INDEX_OF_CAN_CTRL_0 1

typedef enum {
	CAN_CTRL_1_vCanHth,
	CAN_CTRL_0_vCanHth,
	NUM_OF_HTHS
} Can_Arc_HTHType;

typedef enum {
	CAN_CTRL_1_vCanHrh,
	CAN_CTRL_0_vCanHrh,
	NUM_OF_HRHS
} Can_Arc_HRHType;

IMPORT const Can_ConfigType Can_ConfigData;
#endif /* CAN_CFG_H_ */

