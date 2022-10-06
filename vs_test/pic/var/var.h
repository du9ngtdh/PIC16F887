#include "stdio.h"
#include "string.h"

typedef int int1;
typedef char int8;
typedef short int16;
typedef long int32;
typedef long long int64;
typedef float float32;




int1 input_state(int16 pin)
{
    printf("input state: %d\n", pin);
}
void output_low(int16 pin)
{
    printf("output low: %d\n", pin);
}
void output_high(int16 pin)
{
    printf("output high: %d\n", pin);
}
void output_toggle(int16 pin)
{
    printf("output toggle: %d\n", pin);
}
void output_float(int16 pin)
{
    printf("output float: %d\n", pin);
}
void output_drive(int16 pin)
{
    printf("output drive: %d\n", pin);
}

//============================================================
//============================================================


//  int8 restart_cause(void);
//  void reset_cpu(void);
//  void sleep(void);



#define WDT_FROM_SLEEP    3   
#define WDT_TIMEOUT      11   
#define MCLR_FROM_SLEEP  19   
#define MCLR_FROM_RUN    27   
#define NORMAL_POWER_UP  25   
#define BROWNOUT_RESTART 26   


// Timer 0 Prototypes:
  void setup_timer_0(int8 mode);
 void set_timer0(int8 value);      
 int8 get_timer0(void);            
 void setup_counters(int8 mode, int8 prescaler);
 void set_rtcc(int8 value);        
 int8 get_rtcc(void);              
// Constants used for SETUP_TIMER_0() are:
#define T0_INTERNAL   0   
#define T0_EXT_L_TO_H 32
#define T0_EXT_H_TO_L 48

#define T0_DIV_1      8
#define T0_DIV_2      0
#define T0_DIV_4      1
#define T0_DIV_8      2
#define T0_DIV_16     3
#define T0_DIV_32     4
#define T0_DIV_64     5
#define T0_DIV_128    6
#define T0_DIV_256    7


#define T0_8_BIT      0     

#define RTCC_INTERNAL   0      // The following are provided for compatibility
#define RTCC_EXT_L_TO_H 32     // with older compiler versions
#define RTCC_EXT_H_TO_L 48
#define RTCC_DIV_1      8
#define RTCC_DIV_2      0
#define RTCC_DIV_4      1
#define RTCC_DIV_8      2
#define RTCC_DIV_16     3
#define RTCC_DIV_32     4
#define RTCC_DIV_64     5
#define RTCC_DIV_128    6
#define RTCC_DIV_256    7
#define RTCC_8_BIT      0     


//  void setup_wdt(int16 mode);
//  void restart_wdt(void);

#define WDT_18MS        8   
#define WDT_36MS        9   
#define WDT_72MS       10   
#define WDT_144MS      11   
#define WDT_288MS      12   
#define WDT_576MS      13   
#define WDT_1152MS     14   
#define WDT_2304MS     15   


// One of the following may be OR'ed in with the above:

#define WDT_ON             0x4000   
#define WDT_OFF            0       
#define WDT_DIV_16         0x100
#define WDT_DIV_8          0x300
#define WDT_DIV_4          0x500
#define WDT_DIV_2          0x700
#define WDT_TIMES_1        0x900  // Default
#define WDT_TIMES_2        0xB00
#define WDT_TIMES_4        0xD00
#define WDT_TIMES_8        0xF00
#define WDT_TIMES_16      0x1100
#define WDT_TIMES_32      0x1300
#define WDT_TIMES_64      0x1500
#define WDT_TIMES_128     0x1700

 void setup_timer_1(int16 mode);
 int16 get_timer1(void);
 void set_timer1(int16 value);



#define T1_DISABLED         0
#define T1_INTERNAL         5
#define T1_EXTERNAL         7
#define T1_EXTERNAL_SYNC    3

#define T1_CLK_OUT          8

#define T1_DIV_BY_1         0
#define T1_DIV_BY_2         0x10
#define T1_DIV_BY_4         0x20
#define T1_DIV_BY_8         0x30

#define T1_GATE           0x40
#define T1_GATE_INVERTED  0xC0




 void setup_timer_2(int8 mode, int8 period, int8 postscale); 
 int8 get_timer2(void);
 void set_timer2(int8 value);



#define T2_DISABLED         0
#define T2_DIV_BY_1         4
#define T2_DIV_BY_4         5
#define T2_DIV_BY_16        6 





 
 void setup_ccp1(int32 mode, int8 pwm);
 void set_pwm1_duty(int16 value);



// Constants used for SETUP_CCPx() are:
#define CCP_OFF                          0
#define CCP_CAPTURE_FE                   0x04
#define CCP_CAPTURE_RE                   0x05
#define CCP_CAPTURE_DIV_4                0x06
#define CCP_CAPTURE_DIV_16               0x07
#define CCP_COMPARE_SET_ON_MATCH         0x08
#define CCP_COMPARE_CLR_ON_MATCH         0x09
#define CCP_COMPARE_INT                  0x0A 
#define CCP_COMPARE_RESET_TIMER          0x0B 
#define CCP_PWM                          0x0C
#define CCP_PWM_PLUS_1                   0x1c 
#define CCP_PWM_PLUS_2                   0x2c 
#define CCP_PWM_PLUS_3                   0x3c 

// #word   CCP_1       =                    getenv("SFR:CCPR1L")
// #byte   CCP_1_LOW   =                    getenv("SFR:CCPR1L")
// #byte   CCP_1_HIGH  =                    getenv("SFR:CCPR1H")

// The following should be used with the ECCP unit only (or these in)
#define CCP_PWM_H_H                     0x0c
#define CCP_PWM_H_L                     0x0d
#define CCP_PWM_L_H                     0x0e
#define CCP_PWM_L_L                     0x0f

#define CCP_PWM_FULL_BRIDGE             0x40
#define CCP_PWM_FULL_BRIDGE_REV         0xC0
#define CCP_PWM_HALF_BRIDGE             0x80

#define CCP_SHUTDOWN_ON_COMP1           0x100000
#define CCP_SHUTDOWN_ON_COMP2           0x200000
#define CCP_SHUTDOWN_ON_COMP            0x300000
#define CCP_SHUTDOWN_ON_INT0            0x400000
#define CCP_SHUTDOWN_ON_COMP1_INT0      0x500000
#define CCP_SHUTDOWN_ON_COMP2_INT0      0x600000
#define CCP_SHUTDOWN_ON_COMP_INT0       0x700000

#define CCP_SHUTDOWN_AC_L               0x000000
#define CCP_SHUTDOWN_AC_H               0x040000
#define CCP_SHUTDOWN_AC_F               0x080000

#define CCP_SHUTDOWN_BD_L               0x000000
#define CCP_SHUTDOWN_BD_H               0x010000
#define CCP_SHUTDOWN_BD_F               0x020000

#define CCP_SHUTDOWN_RESTART            0x80000000  

#define CCP_PULSE_STEERING_A            0x01000000
#define CCP_PULSE_STEERING_B            0x02000000
#define CCP_PULSE_STEERING_C            0x04000000
#define CCP_PULSE_STEERING_D            0x08000000
#define CCP_PULSE_STEERING_SYNC         0x10000000



 void setup_ccp2(int32 mode, int8 pwm);
 void set_pwm2_duty(int16 value);
 




 void setup_spi(int32 mode);
 void spi_write(int8 value);
 int8 spi_read(int8 value);




#define SPI_DISABLED             0x00
#define SPI_MASTER               0x20
#define SPI_SLAVE                0x24
#define SPI_SCK_IDLE_HIGH        0x10
#define SPI_SCK_IDLE_LOW         0x00
#define SPI_CLK_DIV_4            0x00
#define SPI_CLK_DIV_16           0x01
#define SPI_CLK_DIV_64           0x02
#define SPI_CLK_T2               0x03
#define SPI_SS_DISABLED          0x01

#define SPI_XMIT_L_TO_H          0x4000
#define SPI_XMIT_H_TO_L          0x0000

#define SPI_SAMPLE_AT_MIDDLE     0x0000
#define SPI_SAMPLE_AT_END        0x8000

//The following are provided for compatibility
#define SPI_L_TO_H       SPI_SCK_IDLE_LOW
#define SPI_H_TO_L       SPI_SCK_IDLE_HIGH





 void setup_uart(int32 baud, int8 stream, int32 clock);

 void set_uart_speed(int32 baud, int8 stream, int32 clock);



#define UART_ADDRESS           2
#define UART_DATA              4
#define UART_AUTODETECT        8
#define UART_AUTODETECT_NOWAIT 9
#define UART_WAKEUP_ON_RDA     10
#define UART_SEND_BREAK        13




 void setup_comparator(int32 mode);
 


#define NC_NC_NC_NC   0x00
#define NC_NC         0x00

//Pick one constant for COMP1
#define CP1_A0_A3     0x00090080
#define CP1_A1_A3     0x000A0081
#define CP1_B3_A3     0x00880082
#define CP1_B1_A3     0x00280083
#define CP1_A0_VREF   0x00010084
#define CP1_A1_VREF   0x00020085
#define CP1_B3_VREF   0x00800086
#define CP1_B1_VREF   0x00200087
//Optionally OR with one or both of the following
#define CP1_OUT_ON_A4 0x00000020
#define CP1_INVERT    0x00000010
#define CP1_ABSOLUTE_VREF  0x20000000

//OR with one constant for COMP2
#define CP2_A0_A2     0x00058000
#define CP2_A1_A2     0x00068100
#define CP2_B3_A2     0x00848200
#define CP2_B1_A2     0x00248300
#define CP2_A0_VREF   0x00018400
#define CP2_A1_VREF   0x00028500
#define CP2_B3_VREF   0x00808600
#define CP2_B1_VREF   0x00208700




#define CP2_OUT_ON_A5 0x00002000
#define CP2_INVERT    0x00001000
#define CP2_ABSOLUTE_VREF  0x10000000



#define CP2_T1_SYNC   0x01000000
#define CP2_T1_GATE   0x02000000

// #bit C1OUT = 0x107.6
// #bit C2OUT = 0x108.6




 void setup_vref(int8 mode);
 


#define VREF_LOW  0xa0
#define VREF_HIGH 0x80



 int8 setup_oscillator(int8 mode);



#define OSC_31KHZ   1
#define OSC_125KHZ  0x11
#define OSC_250KHZ  0x21
#define OSC_500KHZ  0x31
#define OSC_1MHZ    0x41
#define OSC_2MHZ    0x51
#define OSC_4MHZ    0x61
#define OSC_8MHZ    0x71
#define OSC_INTRC   1
#define OSC_NORMAL  0



#define OSC_STATE_STABLE 4
#define OSC_31KHZ_STABLE 2





 void setup_adc(int16 mode);
 int8 read_adc(void);
 int1 adc_done(void);
 


#define ADC_OFF                0          // ADC Off
#define ADC_CLOCK_DIV_2    0x100
#define ADC_CLOCK_DIV_8     0x40
#define ADC_CLOCK_DIV_32    0x80
#define ADC_CLOCK_INTERNAL  0xc0          // Internal 2-6us

//ADC Prototypes:
 
 void setup_adc_ports(int32 pins, int32 reference);
 void set_adc_channel(int8 channel);
 



#define sAN0            1       //| A0
#define sAN1            2       //| A1
#define sAN2            4       //| A2
#define sAN3            8       //| A3
#define sAN4            16      //| A5
#define sAN5            32      //| E0
#define sAN6            64      //| E1
#define sAN7            128     //| E2
#define sAN8        0x10000     //| B2
#define sAN9        0x20000     //| B3
#define sAN10       0x40000     //| B1
#define sAN11       0x80000     //| B4
#define sAN12      0x100000     //| B0
#define sAN13      0x200000     //| B5
#define NO_ANALOGS      0       // None
#define ALL_ANALOG   0x1F00FF    // A0 A1 A2 A3 A5 E0 E1 E2 B0 B1 B2 B3 B4 B5

// Optional Second argument:
#define VSS_VDD              0x0000        //| Range 0-Vdd
#define VSS_VREF             0x1000        //| Range 0-Vref
#define VREF_VREF            0x3000        //| Range Vref-Vref
#define VREF_VDD             0x2000        //| Range Vref-Vdd

// Constants used in READ_ADC() are:
#define ADC_START_AND_READ     7   // This is the default if nothing is specified
#define ADC_START_ONLY         1
#define ADC_READ_ONLY          6

  int32 abs( int32 x);


  int32 _mul( int16,  int16);



 int8 read_bank(int8 bank, int8 offset);
 void write_bank(int8 bank, int8 offset, int8 value);
//  void strcpy(char* dest, char* src);
//  void strcopy(char* dest, char* src);
//  void memset( int8* destination,  int8 value,  int16 num);
//  void memcpy( int8* destination,  int8* source,  int16 num);

// String Prototypes:
//  char toupper(char cvalue);
//  char tolower(char cvalue);
//  void sprintf(char* string, char* cstring, ...);

// Data Manipulators Prototypes:
 int1 shift_left( int8* address,  int8 bytes, int1 value);
 int1 shift_right( int8* address,  int8 bytes, int1 value);
 void rotate_left( int8* address,  int8 bytes);
 void rotate_right( int8* address,  int8 bytes);
 void swap( int8 value);
//   int8 make8( int16 var,  int8 offset);
  int8 make8( int32 var,  int8 offset);
//   int16 make16( int8 varhigh,  int8 varlow);
//   int32 make32( int16 var1);
//   int32 make32( int16 var1,  int16 var2);
//   int32 make32( int16 var1,  int8 var2);
//   int32 make32( int16 var1,  int8 var2,  int8 var3);
//   int32 make32( int8 var1);
//   int32 make32( int8 var1,  int8 var2);
//   int32 make32( int8 var1,  int8 var2,  int8 var3);
//   int32 make32( int8 var1,  int8 var2,  int8 var3,  int8 var4);
//   int32 make32( int8 var1,  int16 var2);
//   int32 make32( int8 var1,  int16 var2,  int8 var3);
//   int32 make32( int8 var1,  int8 var2,  int16 var3);
 void bit_set( int8 var,  int8 bit);
//  void bit_set( int16 var,  int8 bit);
//  void bit_set( int32 var,  int8 bit);
//  void bit_clear( int8 var,  int8 bit);
//  void bit_clear( int16 var,  int8 bit);
//  void bit_clear( int32 var,  int8 bit);
//  int1 bit_test( int8 var,  int8 bit);
//  int1 bit_test( int16 var,  int8 bit);
//  int1 bit_test( int32 var,  int8 bit);

// #use delay() Prototypes:
 void delay_cycles( int8 count);
//  void delay_ms( int16 time);
//  void delay_us( int16 time);

// #use rs232() Prototypes:
//  void putchar(char cdata);
//  void putchar(char cdata,  int8 stream);
//  void puts(char* string);
//  void puts(char* string,  int8 stream);
//  char getch(void);
//  char getch( int8 stream);
//  void gets(char* string);
//  void gets(char* string,  int8 stream);
//  int1 kbhit(void);
 int1 kbhit( int8 stream);
//  void printf(char* string, ...);
//  void fprintf( int8 stream, char* string, ...);
 void putc_send(void);
 void fputc_send( int8 stream);
//  int1 rcv_buffer_full(void);
 int1 rcv_buffer_full( int8 stream);
//   int16 rcv_buffer_bytes(void);
  int16 rcv_buffer_bytes( int8 stream);
//  int1 tx_buffer_full(void);
 int1 tx_buffer_full( int8 stream);
//   int16 tx_buffer_bytes(void);
  int16 tx_buffer_bytes( int8 stream);

// #use i2c() Prototypes:
//   int8 i2c_read(void);
//   int8 i2c_read( int8 stream);
  int8 i2c_read( int8 stream, int1 ack);
//  int1 i2c_write( int8 data);
 int1 i2c_write( int8 stream,  int8 data);
//  void i2c_start(void);
//  void i2c_start( int8 stream);
 void i2c_start( int8 stream,  int8 restart);
//  void i2c_stop(void);
 void i2c_stop( int8 stream);
 int8 i2c_isr_state(void);
//  void i2c_slaveaddr( int8 addr);
 void i2c_slaveaddr( int8 stream,  int8 addr);
//  int1 i2c_poll(void);
 int1 i2c_poll( int8 stream);
//  void i2c_init( int32 baud);
 void i2c_init( int8 stream,  int32 baud);

// #use spi() Prototypes:

//   int32 spi_xfer(void);

//   int32 spi_xfer( int32 data);
  int32 spi_xfer( int8 stream,  int32 data);

//   int32 spi_xfer( int8 stream,  int32 data,  int8 bits);
//  void spi_init( int32 baud);
 void spi_init( int8 stream,  int32 baud);
//  void spi_speed( int32 baud);
//  void spi_speed( int8 stream,  int32 baud);
 void spi_speed( int8 stream,  int32 baud,  int32 clock);

//  void spi_prewrite( int32 data);

 void spi_prewrite(unsigned int8,  int32 data);

//   int32 spi_xfer_in(void);

//   int32 spi_xfer_in( int8 bits);

  int32 spi_xfer_in( int8 stream,  int8 bits);

// #use rtos() Prototypes:
 void rtos_run(void);
 void rtos_yield(void);
 void rtos_enable( int8 task);
 void rtos_disable( int8 task);
 void rtos_terminate(void);
//  void rtos_await(int1 flag);
 void rtos_wait( int8 sem);
//  void rtos_signal( int8 sem);
 void rtos_msg_send( int8 task,  int8 msg);
  int8 rtos_msg_read(void);
  int8 rtos_msg_poll(void);
  int1 rtos_overrun( int8 task);
 void rtos_stats( int8 task,  int8* stat);

// #use timer() Prototypes:

  int32 get_ticks(void);

//   int32 get_ticks( int8 stream);

//  void set_ticks( int32 value);

//  void set_ticks( int8 stream,  int32 value);

// #use pwm() Prototypes:
//  void pwm_on(void);
 void pwm_on( int8 stream);
//  void pwm_off(void);
 void pwm_off( int8 stream);
//  void pwm_set_duty( int16 duty);
 void pwm_set_duty( int8 stream,  int16 duty);
//  void pwm_set_duty_percent( int16 percent);
 void pwm_set_duty_percent( int8 stream,  int16 percent);
//  void pwm_set_frequency( int32 frequency);
 void pwm_set_frequency( int8 stream,  int32 frequency);

// // #use capture() Prototypes:
//   int16 get_capture_time(void);
  int16 get_capture_time( int8 stream);
//  int1 get_capture_event(void);
 int1 get_capture_event( int8 stream);







 void enable_interrupts(int32 interrupt);
 void disable_interrupts(int32 interrupt);
 void clear_interrupt(int32 interrupt);
 int1 interrupt_active(int32 interrupt);
 int1 interrupt_enabled(int32 interrupt);
 void ext_int_edge(int8 source, int8 edge);  
 void jump_to_isr(int16 address);
// Constants used in EXT_INT_EDGE() are:  
#define L_TO_H              0x40  
#define H_TO_L                 0  
// Constants used in ENABLE/DISABLE_INTERRUPTS() are:
#define GLOBAL                    0x0BC0
#define PERIPH                    0x0B40
#define INT_RTCC                  0x000B20
#define INT_RB                    0x01FF0B08
#define INT_EXT_L2H               0x50000B10
#define INT_EXT_H2L               0x60000B10
#define INT_EXT                   0x000B10
#define INT_AD                    0x008C40
#define INT_TBE                   0x008C10
#define INT_RDA                   0x008C20
#define INT_TIMER1                0x008C01
#define INT_TIMER2                0x008C02
#define INT_CCP1                  0x008C04
#define INT_CCP2                  0x008D01
#define INT_SSP                   0x008C08
#define INT_BUSCOL                0x008D08
#define INT_EEPROM                0x008D10
#define INT_TIMER0                0x000B20
#define INT_OSC_FAIL              0x008D80
#define INT_COMP                  0x008D20
#define INT_COMP2                 0x008D40
#define INT_ULPWU                 0x008D04
#define INT_RB0                   0x1010B08
#define INT_RB1                   0x1020B08
#define INT_RB2                   0x1040B08
#define INT_RB3                   0x1080B08
#define INT_RB4                   0x1100B08
#define INT_RB5                   0x1200B08
#define INT_RB6                   0x1400B08
#define INT_RB7                   0x1800B08
