#include "stdio.h"
// this function send one bit to ic
void ___send_bit_to_ic(int value)
{
    //write code send one bit to ic here
    printf("%d", value);
}

// this function updates all bits of ic
void ___upload_value_ic()
{
    //write code upload value to ic here
    printf("\n");
}
// this function send 1byte to ic
void ___send_byte_to_ic(char value)
{
    //create a variable to store the value
    char buffer = value;

    //this loop runs eight times to send eight bit data
    for (int i = 0; i < 8; i++)
    {
        if (buffer % 2 == 0) // if buffer divided by 2 then send bit 0
        {
            ___send_bit_to_ic(0);
        }
        else // if buffer divisible by 2 then send bit 1
        {
            ___send_bit_to_ic(1);
        } 

        //after each loop, shift left buffer
        if (buffer != 0)
        {
            buffer >>= 1;
        }
    }
}

// this function send 1 byte to one for the four ic
void OUTPUT_to_4_74HC595(char value, int ic)
{
    static char ___ic_value[4] = {0, 0, 0, 0};
    ___ic_value[ic - 1] = value;
    for (int i = 3; i >= 0; i--)
    {
        ___send_byte_to_ic(___ic_value[i]);
    }
    ___upload_value_ic();
}