/* 
 * File:   Sereal.c
 * Author: Juan Diego Villafuerte Pazos
 *
 * Created on 4 de mayo de 2021, 12:11 AM
 */

#include <stdio.h>
#include <stdlib.h>

#define _XTAL_FREQ 8000000 //frecuencia de 8 MHz
#include <xc.h>
#pragma config FOSC=INTRC_NOCLKOUT //Oscilador interno sin salida
#pragma config WDTE=OFF           //Reinicio repetitivo del pic
#pragma config PWRTE=ON           //espera de 72 ms al iniciar el pic
#pragma config MCLRE=OFF          //El pin MCLR se utiliza como entrada/salida
#pragma config CP=OFF             //Sin protección de código
#pragma config CPD=OFF            //Sin protección de datos
    
#pragma config BOREN=OFF //Sin reinicio cuando el input voltage es inferior a 4V
#pragma config IESO=OFF  //Reinicio sin cambio de reloj de interno a externo
#pragma config FCMEN=OFF //Cambio de reloj externo a interno en caso de fallas
#pragma config LVP=ON    //Programación en low voltage permitida
    
//CONFIGURATION WORD 2
#pragma config WRT=OFF //Proteccion de autoescritura por el programa desactivada
#pragma config BOR4V=BOR40V //Reinicio abajo de 4V 

//VARIABLES
unsigned char Constante_impresion = 70;
unsigned char Boolean = 0;


void HOLA_MUNDO (void)
{
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 13;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 72;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 79;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 76;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 65;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 66;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 85;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 69;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 78;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 65;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 83;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        
        if (PIR1bits.TXIF)
        {
            TXREG = 84;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 65;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 82;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 68;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 69;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 83;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 13;
        }
}

void MENU (void)
{
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 81;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 117;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 99;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 99;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 105;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 111;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 110;
        }
        
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 100;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 115;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 106;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 99;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 117;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 116;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 114;
        }
        if (PIR1bits.TXIF)
        {
            TXREG = 63;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 13;
        }
        
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 40;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 49;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 41;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 68;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 115;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 112;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 108;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 103;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 114;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 99;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 100;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 110;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 100;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 99;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 114;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 99;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 116;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 114;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 115;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 13;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 40;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 50;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 41;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 67;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 109;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 98;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 105;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 114;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 80;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 79;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 82;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 84;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 65;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 13;
        }
        
        
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 40;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 51;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 41;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 67;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 109;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 98;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 105;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 114;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 80;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 79;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 82;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 84;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 66;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 13;
        }
}

void INGRESE_NUEVO_VALOR (void)
{
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 13;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 73;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 110;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 103;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 114;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 101;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 115;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 101;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 32;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 101;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 108;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 32;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 110;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 117;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 101;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 118;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 111;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 32;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 118;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 97;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 108;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 111;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 114;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 58;
    }
    __delay_ms(5);
    if (PIR1bits.TXIF)
    {
        TXREG = 32;
    }
}

void __interrupt() isr(void)
{    
    if (PIR1bits.RCIF)
    {
        //PORTA = RCREG;
        switch (RCREG)
        {
            case 49:
                HOLA_MUNDO();
                if (PIR1bits.TXIF)
                {
                    TXREG = 13;
                }
                MENU();
                break;

            case 50:
                INGRESE_NUEVO_VALOR();
                do 
                {
                    if (PIR1bits.RCIF)
                    {
                        PORTA = RCREG;
                        Boolean = 255;
                    }
                }
                while (Boolean==0);
                __delay_ms(50);
                if (PIR1bits.TXIF)
                {
                    TXREG = 13;
                }
                __delay_ms(50);
                if (PIR1bits.TXIF)
                {
                    TXREG = 13;
                }
                MENU();
                Boolean=0;
                break;
            
            case 51:
                INGRESE_NUEVO_VALOR();
                do 
                {
                    if (PIR1bits.RCIF)
                    {
                        PORTB = RCREG;
                        Boolean = 255;
                    }
                }
                while (Boolean==0);
                __delay_ms(50);
                if (PIR1bits.TXIF)
                {
                    TXREG = 13;
                }
                __delay_ms(50);
                if (PIR1bits.TXIF)
                {
                    TXREG = 13;
                }
                MENU();
                Boolean=0;
                break;
        }
    }
}

void main(void) {
    //configuraciones
    //configuracion reloj
    OSCCONbits.IRCF2 = 1;//100, Frecuencia de reloj 1 MHz
    OSCCONbits.IRCF1 = 0;
    OSCCONbits.IRCF0 = 0;
    OSCCONbits.SCS   = 1;//reloj interno
    //configuracion in out
    ANSEL = 0; //Pines digitales
    ANSELH = 0; 
    TRISA  = 0; 
    TRISB  = 0;
    
    PORTA  = 0;//se limpian los puertos
    PORTB  = 0;
    
    //configuración recepción-transmisión
    TXSTAbits.SYNC = 0;
    TXSTAbits.BRGH = 1;
    
    BAUDCTLbits.BRG16 = 1;
    
    SPBRG = 25;
    SPBRGH = 0;
    
    RCSTAbits.SPEN = 1;
    RCSTAbits.RX9 = 0;
    RCSTAbits.CREN = 1;
    
    TXSTAbits.TXEN = 1;
    
    //configuracion interrupciones
    PIR1bits.RCIF = 1;
    PIE1bits.RCIE = 1;
    INTCONbits.PEIE = 1;
    INTCONbits.GIE = 1;
    
    MENU ();
    
    while (1)
    {
        
    }
          
}