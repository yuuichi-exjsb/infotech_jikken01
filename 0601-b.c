#include<xc.h>
#include<pic.h>
#define _XTAL_FREQ 8000000

#pragma config FOSC = INTOSCIO
#pragma config WDTE = OFF
#pragma config PWRTE = ON
#pragma config MCLRE = OFF
#pragma config BOREN = ON
#pragma config LVP = OFF
#pragma config CPD = OFF
#pragma config WRT = OFF
#pragma config CCPMX = RB3
#pragma config CP = OFF
#pragma config FCMEN = OFF
#pragma config IESO = OFF

void main(void)
{
    OSCCON = 0b01110000;
    
    PORTA = 0x00;
    PORTB = 0x00;
    TRISA = 0x00;
    TRISB = 0x00;
    
    unsigned char c = 0b00000001;
    
    while(1){
        PORTB = c;
        __delay_ms(500);
        c = (c == 0)?1 : c<<1;
    }
}
