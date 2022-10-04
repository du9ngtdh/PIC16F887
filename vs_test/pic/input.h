#pragma once
#include "stdio.h"

unsigned char TRIS_A = 0x00;
unsigned char TRIS_B = 0x00;
unsigned char TRIS_C = 0x00;
unsigned char TRIS_D = 0x00;
unsigned char TRIS_E = 0x00;
unsigned char PORT_A = 0x00;
unsigned char PORT_B = 0x00;
unsigned char PORT_C = 0x00;
unsigned char PORT_D = 0x00;
unsigned char PORT_E = 0x00;

unsigned char get_tris_a()
{
    return TRIS_A;
}

unsigned char get_tris_b()
{
    return TRIS_B;
}

unsigned char get_tris_c()
{
    return TRIS_C;
}

unsigned char get_tris_d()
{
    return TRIS_D;
}

unsigned char get_tris_e()
{
    return TRIS_E;
}
unsigned char GET_TRIS_A()
{
    return TRIS_A;
}

unsigned char GET_TRIS_B()
{
    return TRIS_B;
}

unsigned char GET_TRIS_C()
{
    return TRIS_C;
}

unsigned char GET_TRIS_D()
{
    return TRIS_D;
}

unsigned char GET_TRIS_E()
{
    return TRIS_E;
}

unsigned char input(char *pin)
{
    printf("INPUT: %s\n", pin);
    return 1;
}
unsigned char INPUT(char *pin)
{
    input(pin);
    return 1;
}
unsigned char _input(char *pin, int value)
{
    printf("INPUT: %s = %d\n", pin, value);
    return value;
}
unsigned char _INPUT(char *pin, int value)
{
    _input(pin, value);
    return value;
}
