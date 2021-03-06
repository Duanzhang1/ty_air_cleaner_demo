/***********************************************************
*  File: soc_i2c.h
*  Author: fengzq
*  Date: 20210501
*  Note: 
***********************************************************/
#ifndef __SOC_I2C_H
#define __SOC_I2C_H

#include "tuya_cloud_types.h"

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

/**
 * @brief IIC gpio structure
 */
typedef struct 
{
    UCHAR_T ucSdaPin;
    UCHAR_T ucSclPin;
}I2C_PIN_T;

/**
 * @brief: SOC i2c init
 * @param {IN I2C_PIN_T * pI2CPinCfg --> i2c init gpio config}
 * @retval: OPERATE_RET
 */
OPERATE_RET opSocI2CInit(IN I2C_PIN_T *pI2CPinCfg);

/**
 * @brief: SOC i2c SDA reset proc
 * @param {none}
 * @retval: none
 */
VOID vSocI2CSdaReset(VOID);

/**
 * @brief: SOC i2c SDA set proc
 * @param {none}
 * @retval: none
 */
VOID vSocI2CSdaSet(VOID);

/**
 * @brief: SOC i2c SCL reset proc
 * @param {none}
 * @retval: none
 */
VOID vSocI2CSclReset(VOID);

/**
 * @brief: SOC i2c SCL set proc
 * @param {none}
 * @retval: none
 */
VOID vSocI2CSclSet(VOID);

/**
 * @brief: SOC i2c SDA(input) read
 * @param {none}
 * @retval: none
 */
UCHAR_T ucSocI2CSdaInputRead(VOID);

/**
 * @brief: SOC i2c delay
 * @param {none}
 * @attention: delay time need to adapter according to system
 *              e.g: 
 *                  usDelayTime = usDelayTime * 2;
 *                  usDelayTime = usDelayTime * 0.6;
 * @retval: none
 */
VOID vSocI2CDelay(USHORT_T usTime);

/**
 * @brief: SOC i2c SDA io set
 * @param {none}
 * @retval: none
 */
VOID vSocI2CSDA_IN(VOID);

/**
 * @brief: SOC i2c SDA io set
 * @param {none}
 * @retval: none
 */
VOID vSocI2CSDA_OUT(VOID);


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif  /* __SOC_I2C_H__ */
