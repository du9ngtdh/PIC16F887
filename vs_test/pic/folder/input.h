#pragma once
#include "stdio.h"
void __output(char value)
{
    for (int i = 7; i >= 0; i--)
        printf("%d", ((value >> i) % 2 != 0));
    printf("\n");
}

unsigned char PORT_A = 0x00;
unsigned char PORT_B = 0x00;
unsigned char PORT_C = 0x00;
unsigned char PORT_D = 0x00;
unsigned char PORT_E = 0x00;

unsigned char set_bit(unsigned char value, int bit, int index)
{
    if (bit != 0)
        value |= (1 << index);
    else
        value &= ~(1 << index);

    return value;
}
int get_bit(unsigned char value, int index)
{
    int bit = (value >> index) % 2 != 0;
    return bit;
}

unsigned char TRIS_A = 0x00;
unsigned char TRIS_B = 0x00;
unsigned char TRIS_C = 0x00;
unsigned char TRIS_D = 0x00;
unsigned char TRIS_E = 0x00;

unsigned char get_tris_a()
{
    printf("GET TRiS A: ");
    __output(TRIS_A);
    return TRIS_A;
}

unsigned char get_tris_b()
{
    printf("GET TRiS B: ");
    __output(TRIS_B);
    return TRIS_B;
}

unsigned char get_tris_c()
{
    printf("GET TRiS C: ");
    __output(TRIS_C);
    return TRIS_C;
}

unsigned char get_tris_d()
{
    printf("GET TRiS D: ");
    __output(TRIS_D);
    return TRIS_D;
}

unsigned char get_tris_e()
{
    printf("GET TRiS E: ");
    __output(TRIS_E);
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

int input(char *pin)
{
    unsigned char temp;
    printf("INPUT: %s = ", pin);
    switch (pin[4])
    {
    case 'A':
        temp = PORT_A;
        break;
    case 'B':
        temp = PORT_B;
        break;
    case 'C':
        temp = PORT_C;
        break;
    case 'D':
        temp = PORT_D;
        break;
    case 'E':
        temp = PORT_E;
        break;
    }
    int x = get_bit(temp, __getpin(pin));
    printf("%d\n", x);
    return x;
}
int INPUT(char *pin)
{
    return input(pin);
}

unsigned char input_a()
{
    printf("INPUT PORT A: ");
    __output(PORT_A);
    return PORT_A;
}

unsigned char input_b()
{
    printf("INPUT PORT B: ");
    __output(PORT_B);
    return PORT_B;
}

unsigned char input_c()
{
    printf("INPUT PORT C: ");
    __output(PORT_C);
    return PORT_C;
}

unsigned char input_d()
{
    printf("INPUT PORT D: ");
    __output(PORT_D);
    return PORT_D;
}

unsigned char input_e()
{
    printf("INPUT PORT E: ");
    __output(PORT_E);
    return PORT_E;
}
unsigned char _input_a(unsigned char value)
{
    printf("INPUT PORT A: ");
    __output(value);
    return value;
}

unsigned char _input_b(unsigned char value)
{
    printf("INPUT PORT B: ");
    __output(value);
    return value;
}

unsigned char _input_c(unsigned char value)
{
    printf("INPUT PORT C: ");
    __output(value);
    return value;
}

unsigned char _input_d(unsigned char value)
{
    printf("INPUT PORT D: ");
    __output(value);
    return value;
}

unsigned char _input_e(unsigned char value)
{
    printf("INPUT PORT E: ");
    __output(value);
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
