#include<inttypes.h>
#include<avr/io.h>

void adc_init(void);
uint16_t adc_read(void);



void adc_init(void)
{
	ADMUX |= (1 << REFS0) | (1 << REFS1);
	ADCSRA |= (1 << ADPS2) | (1 << ADPS1);
	ADCSRA &= ~(1 << ADPS0);
	ADCSRA |= (1 << ADEN);

}

uint16_t adc_read(void)

{
	ADMUX |= (1 << MUX0);
	ADCSRA |= (1 << ADSC);
	
	while(ADCSRA & (1 << ADSC))
	{
	
	}
	return ADCW;
}

int main(void)

{
	DDRB |= ( 1 << DDB0);
	uint16_t adcvalue=0;
	adc_init();
	while(1)
	
	{
		adcvalue = adc_read();
		if(adcvalue<100)
		{
			PORTB= 0b00000001;
			
		
		}
		else
		{
			PORTB = 0b00000000;
		}
	}
	return 0;
}