#pragma once
#include <stdio.h>

#define PIN_A0  "PIN_A0"
#define PIN_A1  "PIN_A1"
#define PIN_A2  "PIN_A2"
#define PIN_A3  "PIN_A3"
#define PIN_A4  "PIN_A4"
#define PIN_A5  "PIN_A5"
#define PIN_A6  "PIN_A6"
#define PIN_A7  "PIN_A7"

#define PIN_B0  "PIN_B0"
#define PIN_B1  "PIN_B1"
#define PIN_B2  "PIN_B2"
#define PIN_B3  "PIN_B3"
#define PIN_B4  "PIN_B4"
#define PIN_B5  "PIN_B5"
#define PIN_B6  "PIN_B6"
#define PIN_B7  "PIN_B7"

#define PIN_C0  "PIN_C0"
#define PIN_C1  "PIN_C1"
#define PIN_C2  "PIN_C2"
#define PIN_C3  "PIN_C3"
#define PIN_C4  "PIN_C4"
#define PIN_C5  "PIN_C5"
#define PIN_C6  "PIN_C6"
#define PIN_C7  "PIN_C7"

#define PIN_D0  "PIN_D0"
#define PIN_D1  "PIN_D1"
#define PIN_D2  "PIN_D2"
#define PIN_D3  "PIN_D3"
#define PIN_D4  "PIN_D4"
#define PIN_D5  "PIN_D5"
#define PIN_D6  "PIN_D6"
#define PIN_D7  "PIN_D7"

#define PIN_E0  "PIN_E0"
#define PIN_E1  "PIN_E1"
#define PIN_E2  "PIN_E2"
#define PIN_E3  "PIN_E3"



void delay_ms(int time)
{
    if (time != 0)
        printf("delay %d ms\n", time);
}
void DELAY_MS(int time)
{
    delay_ms(time);
}

void delay_us(int time)
{
    if (time!= 0)
    {
        printf("delay %d us\n", time);
    }
}

void DELAY_US(int time)
{
    delay_us(time);
}