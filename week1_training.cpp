#include "mbed.h"

DigitalOut led(LED1);
AnalogIn ptm(p15);

int main() {
    while(1){
        int time = 2000;
        double input = ptm;
        int on = time * ptm;
        int off = 2000 - on;
        led = 1;
        wait_ms(on);
        led = 0;
        wait_ms(off);
    }
    wait_ms(500);
//    }
}
