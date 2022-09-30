int send_74hc595_pin_data = PIN_D0;
int ck_74hc595_pin = PIN_D1;
int update_74hc595 = PIN_D2;
int ___ic_value[4] = {0,0,0,0};
// this function send one bit to ic
void ___send_bit_to_ic(int1 value)
{
    //write code send one bit to ic here
    output_bit(send_74hc595_pin_data,value);
    //delay_ms(1);
    output_bit(ck_74hc595_pin,1);
    //delay_ms(1);
    output_bit(ck_74hc595_pin,0);
    //delay_ms(1);
    output_bit(ck_74hc595_pin,1);
    
}

// this function updates all bits of ic
void ___upload_value_ic()
{
    //write code upload value to ic here
    output_bit(update_74hc595,1);
    //delay_ms(1);
    output_bit(update_74hc595,0);
    //delay_ms(1);
    output_bit(update_74hc595,1);
  
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
void OUTPUT_to_4_74HC595(int8 value,int8 ic)
{
     ___ic_value[ic-1] = value;
      
     ___send_byte_to_ic(___ic_value[3]);
     ___send_byte_to_ic(___ic_value[2]);
     ___send_byte_to_ic(___ic_value[1]);
     ___send_byte_to_ic(___ic_value[0]);
     ___upload_value_ic();
}