#pragma once
#include "stdio.h"
#include "input.h"



void ___output( char value)
{
    for (int i = 7; i >= 0; i--)
    {
        if ((value >> i)%2 != 0)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
void output_a(char value)
{
    printf("PORT_A = ", value);
    ___output(value);
}
void output_b(char value)
{
    printf("PORT_B = ", value);
    ___output(value);
}
void output_c(char value)
{
    printf("PORT_C = ", value);
    ___output(value);
}
void output_d(char value)
{
    printf("PORT_D = ", value);
    ___output(value);
}
void output_e(char value)
{
    printf("PORTE = ", value);
    ___output(value);
}

void OUTPUT_A(char value)
{
    output_a(value);
}
void OUTPUT_B(char value)
{
    output_b(value);
}

void OUTPUT_C(char value)
{
    output_c(value);
}

void OUTPUT_D(char value)
{
    output_d(value);
}

void OUTPUT_E(char value)
{
    output_e(value);
}





//============================================================================
//============================================================================

void set_tris_a(char value)
{
    TRIS_A = value;
    printf("TRIS_A = ");
    ___output(value);
}
void set_tris_b(char value)
{
    TRIS_B = value;
    printf("TRIS_B = ");
    ___output(value);
}
void set_tris_c(char value)
{
    TRIS_C = value;
    printf("TRIS_C = ");
    ___output(value);
}

void set_tris_d(char value)
{
    TRIS_D = value;
    printf("TRIS_D = ");
    ___output(value);
}
void set_tris_e(char value)
{
    TRIS_E = value;
    printf("TRIS_E = ");
    ___output(value);
}
void SET_TRIS_A(char value)
{
    set_tris_a(value);
}
void SET_TRIS_B(char value)
{
    set_tris_b(value);
}
void SET_TRIS_C(char value)
{
    set_tris_c(value);
}
void SET_TRIS_D(char value)
{
    set_tris_d(value);
}
void SET_TRIS_E(char value)
{
    set_tris_e(value);
}


//================================================================
//================================================================
void output_bit(char* pin, int bit)
{
    printf("%s = %d\n", pin,bit);
}
void OUTPUT_BIT(char* pin, int bit)
{
    output_bit(pin, bit);
}
