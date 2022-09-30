#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void init()
{
	DDRA=0xFF;//Port A for 7 Segment 1 
	DDRB=0xFF;//Port B for 7 Segment 2
}
int main(void)
{
	init();
	while (1)
	{
		counter();
	}
}
void counter()
{
	PORTB=0x3F;PORTA=0x3F;
	_delay_ms(100);
	PORTB=0x06;PORTA=0x3F;
	_delay_ms(100);
	PORTB=0x5B;PORTA=0x3F;
	_delay_ms(100);
	PORTB=0x4F;PORTA=0x3F;
	_delay_ms(100);
	PORTB=0x66;PORTA=0x3F;
	_delay_ms(100);
	PORTB=0x6D;PORTA=0x3F;
	_delay_ms(100);
	PORTB=0x7D;PORTA=0x3F;
	_delay_ms(100);
	PORTB=0x07;PORTA=0x3F;
	_delay_ms(100);
	PORTB=0x7F;PORTA=0x3F;
	_delay_ms(100);
	PORTB=0x6F;PORTA=0x3F;
	_delay_ms(100);
	PORTA=0x06;PORTB=0x3F;
	_delay_ms(100);
	PORTA=0x06;PORTB=0x06;
	_delay_ms(100);
	PORTA=0x06;PORTB=0x5B;
	_delay_ms(100);
	PORTA=0x06;PORTB=0x4F;
	_delay_ms(100);
	PORTA=0x06;PORTB=0x66;
	_delay_ms(100);
	PORTA=0x06;PORTB=0x6D;
	_delay_ms(100);
	PORTA=0x06;PORTB=0x7D;
	_delay_ms(100);
	PORTA=0x06;PORTB=0x07;
	_delay_ms(100);
	PORTA=0x06;PORTB=0x7F;
	_delay_ms(100);
	PORTA=0x06;PORTB=0x6F;
	_delay_ms(100);
}
