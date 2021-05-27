//
// Created by Genki Sasaki on 2020/12/10.
//
#include "mbed.h"
#include "lwip.h"
#define __STDC_FORMAT_MACROS
#include "udp.h"
#include "f767eth.h"
#include "AD5754R.h"
#include "DAC_HAT.h"
#include "F7_enc.h"
#include "config.h"
#include "function.h"

int main() {
    printf("--------TEST ST@RT--------\n\r");

    Ticker recv_tick;
    Ticker send_tick;
    Ticker cont_tick;

    /* counter settings */
    tim1_init();
    tim8_init();
    tim3_init();
    tim4_init();

    hat.init();
    udp.init(); // no call this function, no life
    recv_tick.attach(MX_LWIP_Process, 0.00001); //0.00001
    send_tick.attach(send, 0.00002); //0.00002
    cont_tick.attach(control, 0.0001);

    while (1) {
        wait_us(1);
    }

    return 0;
}