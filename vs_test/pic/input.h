#pragma once
#include "stdio.h"

unsigned char TRIS_A = 0x00;
unsigned char TRIS_B = 0x00;
unsigned char TRIS_C = 0x00;
unsigned char TRIS_D = 0x00;
unsigned char TRIS_E = 0x00;

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

unsigned char input_a()
{
    printf("INPUT PORT A \n");
    return 0xff;
}

unsigned char input_b()
{
    printf("INPUT PORT B \n");
    return 0xff;
}

unsigned char input_c()
{
    printf("INPUT PORT C \n");
    return 0xff;
}

unsigned char input_d()
{
    printf("INPUT PORT D \n");
    return 0xff;
}

unsigned char input_e()
{
    printf("INPUT PORT E \n");
    return 0xff;
}
unsigned char _input_a(unsigned char value)
{
    printf("INPUT PORT A: %d\n", value);
    return value;
}

unsigned char _input_b(unsigned char value)
{
    printf("INPUT PORT B: %d\n", value);
    return value;
}

unsigned char _input_c(unsigned char value)
{
    printf("INPUT PORT C: %d\n", value);
    return value;
}

unsigned char _input_d(unsigned char value)
{
    printf("INPUT PORT D: %d\n", value);
    return value;
}

unsigned char _input_e(unsigned char value)
{
    printf("INPUT PORT E: %d\n", value);
    return value;
}
unsigned char INPUT_A()
{
    return input_a();
}

unsigned char INPUT_B()
{
    return input_b();
}

unsigned char INPUT_C()
{
    return input_c();
}

unsigned char INPUT_D()
{
    return input_d();
}

unsigned char INPUT_E()
{
    return input_e();
}

unsigned char _INPUT_A(unsigned char value)
{
    return _INPUT_A(value);
}

unsigned char _INPUT_B(unsigned char value)
{
    return _INPUT_B(value);
}

unsigned char _INPUT_C(unsigned char value)
{
    return _INPUT_C(value);
}

unsigned char _INPUT_D(unsigned char value)
{
    return _INPUT_D(value);
}

unsigned char _INPUT_E(unsigned char value)
{
    return _INPUT_E(value);
}
