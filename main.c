
#include "msp430f5529.h"
#include "IIC.h"
int main()
{
  // Stop watchdog timer to prevent time out reset
WDTCTL = WDTPW + WDTHOLD;
LCD_Init();

unsigned char str2[] = "https://www.baidu.com";
P2DIR |= BIT1;
P1DIR |= BIT1;
LCD_ShowString(1,1,str2,16);


}
