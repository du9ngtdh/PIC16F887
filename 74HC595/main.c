#include <main.h>
#include "my_logic.h"


void main()
{
      

   set_tris_d(~0x07);
   while(TRUE)
   {  
      loop_logic(40);
    }//while
 }//main


