#include<xc.h>
#include<stdio.h>
#include<htc.h>
#include<pic.h>
#include<pic16f88.h>

#define _XTAL_FREQ 8000000
#pragma config WDTE = OFF, PWRTE = OFF, CP=OFF, FOSC =HS

void main(void)
{
    TRISB = 0x00;
    while(1){
        PORTB = 0xff;
        __delay_ms(100);
        
        PORTB = 0x00;
        __delay_ms(100);
    }
}
