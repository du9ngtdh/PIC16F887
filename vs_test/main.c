#include "main.h"


int main()
{
    unsigned char data = 0x0f;



    // while(1)
    {
        output_a(data);
        data = ~data;
        output_a(data);
    }
    

    debug_end();
}