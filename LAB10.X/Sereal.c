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

void __interrupt() isr(void){       //apartado de interrupciones
       
}
void main(void) {
    //configuraciones
    
    //configuracion reloj
    OSCCONbits.IRCF = 0b0111;//0111, Frecuencia de reloj 8 MHz
    OSCCONbits.SCS   = 1;//reloj interno
    
    //configuracion de entradas y salidas
    ANSELH = 0;     //entradas/salidas digitales
    ANSEL  = 0;
    
    TRISB  = 0;     //salidas
    TRISA  = 0;     //salidas
    //TRISC  = 0;
    TRISD  = 0;
    
    PORTA  = 0;     //borrar los puertos
    PORTB  = 0;
    PORTC  = 0;
    PORTD  = 0;
    
    //Configuracion para el sereal
    BAUDCTLbits.SCKP = 1;
    BAUDCTLbits.BRG16 = 1;
    RCSTAbits.SPEN = 1;
    SPBRG = 25;
    SPBRGH = 0;
    TXSTAbits.SYNC = 0;    //asincrono
    TXSTAbits.BRGH = 1;    //highspeed
    TXSTAbits.TXEN = 1;    //transmision
    
    //configuracion interrupciones
    INTCONbits.GIE  = 1;
    INTCONbits.PEIE = 1;
    PIE1bits.TMR2IE = 1;

    while (1){}
}