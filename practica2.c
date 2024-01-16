#include "config.h"
#define _XTAL_FREQ 8000000
int i;

int main(void) {
    OSCCON = 0x72;
    TRISA = 0x00;
    TRISB &= ~(1 << 0);
    while (1) {
        if (PORTB & (1 << 0)) {

            for (i = 0; i <= 4; i++) {
                LATA |= (1 << i);
                LATA &= ~(1 << i - 1);
                __delay_ms(200);
            }
        } else {
            LATA = 0x00;
        }
    }
    return 0;
}