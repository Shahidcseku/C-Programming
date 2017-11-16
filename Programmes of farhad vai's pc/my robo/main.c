#include<avr/io.h>
#include<util/delay.h>

int main(void)

{
	int i;
	DDRD |= (1 << DDD0) | (1 << DDD1) | (1 << DDD2) | (1 << DDD3) | (1 << DDD4) | (1 << DDD5) | (1 << DDD6);
	DDRC |= (1 << DDC0) | (1 << DDC1) | (1 << DDC2) | (1 << DDC3) | (1 << DDC4) | (1 << DDC5) | (1 << DDC6);
	
	while(1)
	
	{
		for (i=0;i<6;i++)
		
		{
			PORTD = (1 << i);
			
			
			
			PORTC = (1 << i);
		_delay_ms(10);
		}
	
	
	
	}

}