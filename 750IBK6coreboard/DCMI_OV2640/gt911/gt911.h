#ifndef __GT911_H
#define __GT911_H

#ifdef __cplusplus
extern "C"
{
#endif
	
#include "stm32h7xx.h"
#include "i2c.h"


#define GT_CMD_WR    0XBA     //д����
#define GT_CMD_RD     0XBB     //������
  
#define GT_CTRL_REG 	0X8040   	//GT9147���ƼĴ���
#define GT_CFGS_REG 	0X8047   	//GT9147������ʼ��ַ�Ĵ���
#define GT_CHECK_REG 	0X80FF   	//GT9147У��ͼĴ���
#define GT_PID_REG 		0X8140   	//GT9147��ƷID�Ĵ���
#define GT_GSTID_REG 	0X814E   	//GT9147��ǰ��⵽�Ĵ������
#define GT_TP1_REG 		0X8150  	//��һ�����������ݵ�ַ
#define GT_TP2_REG 		0X8158		//�ڶ������������ݵ�ַ
#define GT_TP3_REG 		0X8160		//���������������ݵ�ַ
#define GT_TP4_REG 		0X8168		//���ĸ����������ݵ�ַ
#define GT_TP5_REG 		0X8170		//��������������ݵ�ַ
	
typedef struct
{
  uint16_t TouchDetected;
  uint16_t X;
  uint16_t Y;
} TS_StateTypeDef;

void gt911_init(void);
void gt911_get_state(TS_StateTypeDef* state);

#ifdef __cplusplus
}
#endif

#endif

