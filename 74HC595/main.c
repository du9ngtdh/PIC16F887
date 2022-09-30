#include <main.h>
#include "my_74hc595.h"

void main()
{ 
   set_tris_d(~0x07);
   char LEDA = 0xff;
   char LEDB = 0xff;
   int mode = 0;

   while(TRUE)
   {
      OUTPUT_to_4_74HC595(LEDA,1);
      OUTPUT_to_4_74HC595(LEDB,2);
      delay_ms(100);
      OUTPUT_to_4_74HC595(LEDA,1);    
      OUTPUT_to_4_74HC595(LEDB,2); 
      delay_ms(100);
      
      if(mode == 0)
      {
      LEDA>>=1;
      LEDB<<=1;
      if(LEDA == LEDB&& LEDB == 0)
         {
            mode = 1;
         }
      }
      else if(mode == 1)
      {
         LEDA = ~LEDA;
         LEDB = ~LEDB;
         LEDA<<=1;
         LEDB>>=1;
         LEDA = ~LEDA;
         LEDB = ~LEDB;
         if(LEDA == LEDB&& LEDB == 0xff)
          {
             mode = 2;
          }
      }
      
      if(mode == 2)
      {
      LEDA<<=1;
      LEDB>>=1;
      if(LEDA == LEDB&& LEDB == 0)
         {
            mode = 3;
         }
      }
      if(mode == 3)
      {
      
         LEDA = ~LEDA;
         LEDB = ~LEDB;
         LEDA>>=1;
         LEDB<<=1;
         LEDA = ~LEDA;
         LEDB = ~LEDB;
      
      if(LEDA == LEDB&& LEDB == 0xff)
         {
            mode = 0;
         }
      }
      
    }
      
      
   }


