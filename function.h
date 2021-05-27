//
// Created by Genki Sasaki on 2020/12/11.
//

#ifndef MCOM_FUNCTION_H
#define MCOM_FUNCTION_H

void send(){
    udp.topc.tim1_pulse = get_counter_tim1();
    udp.topc.tim8_pulse = get_counter_tim8();
    udp.topc.tim3_pulse = get_counter_tim3();
    udp.topc.tim4_pulse = get_counter_tim4();
    udp.send();
}

void control(){
//    value[0] += 1.0f;
//    value[1] += 1.1f;
//    value[2] += 1.0f;

//    if (hat.sw1) {
//        rawValue += 100;
//    }
//    if (hat.sw2) {
//        rawValue -= 100;
//    }
//    if (hat.sw1 and hat.sw2) {
//        rawValue = 0x0000;
//    }

//    float_value = 1.0;

//    hat.set_value(4, float_value * 0.8);
//    hat.set_raw_value(4, rawValue);
//    hat.set_value(4, sin(value[0] * 0.3));
//    if (recv_flag) {
        hat.set_value(4, udp.tombed.ch2 * 0.8);
//        recv_flag = false;
//    }
//    if (state){
//        float_value += 0.0001;
//    } else {
//        float_value -= 0.0001;
//    }
//    if (float_value >= 1.00 || float_value <= -1.0){
//        state = !state;
//    }

//    sinValue[0] = sin(value[0]);
//    sinValue[1] = cos(value[1]);
//    sinValue[2] = sin(value[2]);
//    my_led1 = sinValue[0];
//    my_led2 = sinValue[0];
//    my_led3 = sinValue[0];
//    hat.rgb_r = sinValue[0];
//    hat.rgb_g = sinValue[1];
//    hat.rgb_b = sinValue[2];
//
//    if (count > 100) {
//        hat.rled = val;
//        hat.gled = !val;
//        hat.bled = val;
//        count = 0;
//        val = !val;
//    }
//
//    count++;
}

#endif //MCOM_FUNCTION_H
