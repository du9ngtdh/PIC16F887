#include "stdio.h"
#include "hc595.h"

void main(int argc, char **argv)
{
    OUTPUT_to_4_74HC595(0x01, 1);
}