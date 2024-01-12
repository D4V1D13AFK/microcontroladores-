/* 
 * File:   main.c
 * Author: User
 *
 * Created on 11 de enero de 2024, 04:15 PM
 */

#include "config.h" //IMPORTA LA CONFIGURACIÓN DEL PROGRAMA
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>//librería para enteros no estándar
#define _XTAL_FREQ 8000000 //DEFINICIÓN OSCILADOR DEL CPU

/*
 * función prinicipal
 */
int main(){
    
    OSCCON=0x72; //CONFIGURA EL OSCILADOR INTERNO A 8MHZ
    TRISB &=~(1<<0);
    
    while(1){
        LATB |=(1<<0); //ENCENDEMOS LED EN RB0
        __delay_ms(500);
        LATB &=~(1<<0);
        __delay_ms(500);   
    }
    

    return 0;
}

