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
    TRISA = 0xff;//入力に
    TRISB = 0x00;
    
    
    unsigned char pob_0 = 0b00111111;//0
    unsigned char pob_1= 0b00000110;//1
    unsigned char pob_2= 0b01011011;//2
    unsigned char pob_3= 0b01001111;//3
    unsigned char pob_4= 0b01100110;//4
    unsigned char pob_5= 0b01101101;//5
    unsigned char pob_6= 0b01111100;//6
    unsigned char pob_7= 0b00000111;//7
    unsigned char pob_8= 0b01111111;//8
    unsigned char pob_9= 0b01101111;//9
    
    unsigned char prb[10] = {pob_0,pob_1,pob_2,pob_3,pob_4,pob_5,pob_6,pob_7,pob_8,pob_9};
    
    
    int pob_cnt = 0;

    while (1)
    {
         PORTB = prb[pob_cnt];
        __delay_ms(1000);
        if ((PORTA == 0b00000001)||(PORTA == 0b00000010)||(PORTA == 0b00000100)||(PORTA == 0b00001000)||(PORTA == 0b00010000)||(PORTA == 0b00100000)||(PORTA == 0b01000000)||(PORTA == 0b10000000))
        {
            if (pob_cnt == 9)
            {
                pob_cnt = 0;
            }
            else{
            pob_cnt += 1;
            }
        }
    
   
    }
    
    

}
