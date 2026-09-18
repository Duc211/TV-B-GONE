#define NA 1 

#define LED 8 
#define IRLED 21        
#define TRIGGER 9       

#define NUM_ELEM(x) (sizeof (x) / sizeof (*(x)));

#ifdef NOP
#undef NOP
#endif
#define NOP __asm__ __volatile__ ("nop")

#define DELAY_CNT 25

#define freq_to_timerval(x) (x / 1000)

struct IrCode {
  uint8_t timer_val;
  uint16_t numpairs;
  uint8_t bitcompression;
  uint16_t const *times;
  uint8_t const *codes;
};
