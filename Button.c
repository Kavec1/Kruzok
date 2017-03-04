//#define is_high(y) (PINA & _BV(y) == _BV(y)) //=nestlačené kontrola, ci je nastaveny y-ty bit registra 'x'
//#define is_low(y) ((PINA & _BV(y)) != _BV(y)) //=stlačené kontrola, ci je vstupny pin nastaveny na logicku nulu
void setButton(char port,int pin);
int Pin_state(char x,int y);

void setButton(char port,int pin)
{
	switch(port)
	{
		case 'A':
		DDRA |=(0<<pin);
		PORTA |=(1<<pin);
		break;

		case 'B':
		DDRB |=(0<<pin);
		PORTB |=(1<<pin);
		break;

		case 'C':
		DDRC |=(0<<pin);
		PORTC |=(1<<pin);
		break;

		case 'D':
		DDRD |=(0<<pin);
		PORTD |=(1<<pin);
		break;
	}
}
int Pin_state(char x,int y)
{
	switch (x)
	{
		case 'A':
		while((PINA & _BV(y))!=_BV(y));  
		_delay_ms(2);
		while((PINA & _BV(y))==_BV(y));
		_delay_ms(2);
		return 1;
		break;
		
		case 'B':
		while((PINB & _BV(1))!=_BV(1));
		_delay_ms(2);
		while((PINB & _BV(1))==_BV(1));
		_delay_ms(2);
		return 1;
		break;
		
		case 'C':
		while((PINC & _BV(1))!=_BV(1));
		_delay_ms(2);
		while((PINC & _BV(1))==_BV(1));
		_delay_ms(2);
		return 1;
		break;
		
		case 'D':
		while((PIND & _BV(1))!=_BV(1));
		_delay_ms(2);
		while((PIND & _BV(1))==_BV(1));
		_delay_ms(2);
		return 1;
		break;		
	}	
}
