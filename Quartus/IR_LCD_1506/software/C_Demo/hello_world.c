#include <stdio.h>
#include "system.h"
#include "LCD1602_Qsys.h"
#include "sys/alt_irq.h"


unsigned char LCD_Data[16]={"IR-LCD_Demo"};


unsigned int *pUser_IR=IR_DEMO_0_BASE; //����ָ��ָ����Qsys�����ɵ�IR����ģ��
unsigned int IR_Data;
unsigned char Data_Ready;

void IR_Irq_Process()
{
	Data_Ready=1;
	IR_Data=*(pUser_IR);
}

int IR_Irq_Init()
{
	/*��Ҫ��ʾ�� 2017.07.12
	 * 1.��ע���жϺ���ʱ���жϿ�������ź�Ӳ���жϺ���������ֱ�Ӵ�system.h����
	 * 2.��Quartus15.0��֮ǰ�İ汾�У����ɵ�system.h�ļ���Bug,���������ж�����źŵ�ģ�飬���жϿ�������ź�Ӳ���жϺ�
	 *   Ϊ-1��
	 * 3.��Ҫ�ֶ��޸�system.h���жϿ�������ź�Ӳ���жϺţ��úſ�����Qsys�п�����������������ͬ��
	 * */
    int States;
    States=alt_ic_isr_register(
    		IR_DEMO_0_IRQ_INTERRUPT_CONTROLLER_ID,   // �жϿ�������ţ���system.h����
    		IR_DEMO_0_IRQ,                           // Ӳ���жϺţ���system.h����
    		IR_Irq_Process,                          // �жϷ����Ӻ���
			NULL,                                    // ָ�����豸����ʵ����ص����ݽṹ��
			0
						);
    return States;
}

int main()
{
	  int States;
	  unsigned char KEY_CODE;
      printf("Hello from Nios II!\n");

      States=IR_Irq_Init();
	  LCD_Disp(1, 2 , LCD_Data , 11); //�ڵ�һ����ʾ��IR-LCD_Demo��

	  while(1)
	  {

		  if(Data_Ready==1)
		  {
			  Data_Ready=0;
			  KEY_CODE=(IR_Data>>16)&0xff;
			  switch(KEY_CODE)
			  {
			  	  case 0x01: LCD_Disp(2,0,"                ",16); LCD_Disp(2,0,"Key: 1",6); break;
			  	  case 0x02: LCD_Disp(2,0,"                ",16); LCD_Disp(2,0,"Key: 2",6); break;
			  	  case 0x03: LCD_Disp(2,0,"                ",16); LCD_Disp(2,0,"Key: 3",6); break;
			  	  case 0x04: LCD_Disp(2,0,"                ",16); LCD_Disp(2,0,"Key: 4",6); break;
			  	  case 0x05: LCD_Disp(2,0,"                ",16); LCD_Disp(2,0,"Key: 5",6); break;
			  	  case 0x1a: LCD_Disp(2,0,"                ",16); LCD_Disp(2,0,"Key: UP",7); break;
			  	  case 0x1e: LCD_Disp(2,0,"                ",16); LCD_Disp(2,0,"Key: DOWN",9); break;
			  	  default: break;
			  }
		  }
	  }


  return 0;
}