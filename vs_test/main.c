#include "main.h"
int delay = 0;
int i = 0;

int test(int x)
{
    return x;
}
int test(int x, int y)
{
    return x + y;
}

int main()
{
    debug_start();
    SET_TRIS_A(0x00);
    
    // while(1)
    {
        printf("%d ",test(5));
    }
    
    debug_end();
    
}