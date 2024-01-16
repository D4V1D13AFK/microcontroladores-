#include "config.h"
#define _XTAL_FREQ 8000000

int main(void) {
    OSCCON=0x72;
    TRISA &=~(1<<0);
    TRISB |= (1<<0);
    
    while(1){
        
    if (PORTB &(1<<0)){
        LATA |= (1<<0);
    }   
    else{
        LATA &=~(1<<0);      
    }
}
    return 0;    
}    

