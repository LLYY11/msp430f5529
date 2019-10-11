
#include "msp430f5529.h"
#include "IIC.h"
int main()
{
  // Stop watchdog timer to prevent time out reset
WDTCTL = WDTPW + WDTHOLD;
LCD_Init();//oled12864初始化

unsigned char str2[] = "https://www.baidu.com";
LCD_ShowString(1,1,str2,16);//(坐标，坐标，字符串，字符大小)


}
