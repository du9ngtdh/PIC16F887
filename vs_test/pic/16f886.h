#pragma once
#include "GPIO.h"
#include "delay.h"
#include "input.h"

typedef int int1;

void debug_start(void)
{
    printf("\n---------------------PIC 16F887 Debug Start---------------------\n\n");
}
void debug_end(void)
{
    printf("\n---------------------PIC 16F887 Debug End---------------------\n");
}
