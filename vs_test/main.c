
#include "pic/16f886.h"

int main()
{
    debug_start();
    //while (1)
    {
        output_a(0x01);
        input(PIN_A0);
    }

    debug_end();
}
