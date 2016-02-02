#include<msp430x14x.h>
 
#include"lcd1602.h"
 

void main(void)
 
{
 
    WDTCTL = WDTPW|WDTHOLD;
 
    lcd_init();
 
    for(;;)
 
    {
 
      lcd_xy(0,0);
 
      Print("CEPARK 430V 1.0");
 
      lcd_xy(0,1);
 
      Print("ROOOKIES STUDENT");
 
    }
 
}