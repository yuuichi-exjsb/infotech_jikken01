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

    unsigned char zero = 0b00000000;
    
    unsigned char excla = 0b11111101;

    unsigned char S1 = 0b01110000;
    unsigned char S2 = 0b10001001;
    unsigned char S3 = 0b00000110;

    unsigned char O1 = 0b01111110;
    unsigned char O2 = 0b10000001;

    //!
    PORTB = excla;
    __delay_ms(3);

    PORTB = zero;
    __delay_ms(3);

    //S
    PORTB = S1;
    __delay_ms(3);
    PORTB = S2;
    __delay_ms(3);
    PORTB = S2;
    __delay_ms(3);
    PORTB = S2;
    __delay_ms(3);
    PORTB = S3;
    __delay_ms(3);

    PORTB = zero;
    __delay_ms(3);

    //o
    PORTB = O1;
    __delay_ms(3);

    PORTB = O2;
    __delay_ms(3);
    PORTB = O2;
    __delay_ms(3);
    PORTB = O2;
    __delay_ms(3);

    PORTB =O1;
    __delay_ms(3);

    PORTB = zero;
    __delay_ms(3);

    //S
    PORTB = S1;
    __delay_ms(3);
    PORTB = S2;
    __delay_ms(3);
    PORTB = S2;
    __delay_ms(3);
    PORTB = S2;
    __delay_ms(3);
    PORTB = S3;
    __delay_ms(3);

    PORTB = zero;
    __delay_ms(3);

     //!
    PORTB = excla;
    __delay_ms(3); 
}
