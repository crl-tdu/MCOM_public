//
// Created by Genki Sasaki on 2020/12/11.
//

#ifndef MCOM_CONFIG_H
#define MCOM_CONFIG_H

DigitalOut my_led1(LED1);
DigitalOut my_led2(LED2);
DigitalOut my_led3(LED3);

f767eth udp{};
DAC_HAT hat{};

int state = 0;
float float_value = 0.0;
float value[3] = {0.0f};
float sinValue[3] = {0.0f};
uint16_t rawValue = 0x8000;
int val = 0;
int count = 0;

bool recv_flag = false;

#endif //MCOM_CONFIG_H
