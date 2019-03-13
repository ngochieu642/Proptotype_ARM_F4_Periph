#include "main.h"
static __IO uint32_t uwTimingDelay;

int main(void){
	while(1){
	
	}
	return 0;
} 
void TimingDelay_Decrement(void)
{
  if (uwTimingDelay != 0x00)
  { 
    uwTimingDelay--;
  }
}