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
    
    unsigned char a = 0b01111110;
    unsigned char b = 0b10000001;
    
    
    PORTB = a;
    __delay_ms(3);
    
    PORTB = b;
    __delay_ms(5);
    PORTB = b;
    __delay_ms(5);
     PORTB = b;
    __delay_ms(5);
    PORTB = b;
    __delay_ms(5);
    
     PORTB = a;
    __delay_ms(3);
    
    PORTB = a;
    __delay_ms(3);
    
    PORTB = b;
    __delay_ms(5);
    PORTB = b;
    __delay_ms(5);
     PORTB = b;
    __delay_ms(5);
    PORTB = b;
    __delay_ms(5);
    
     PORTB = a; 
    __delay_ms(3);
    
 
    
}
