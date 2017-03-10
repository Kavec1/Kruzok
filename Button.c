#include "Button.h"

void setButton(char port,short pin)
{
	switch(port)
	{
		case 'A':
		DDRA &= ~(1<<pin);
		PORTA |=(1<<pin);
		break;

		case 'B':
		DDRB &= ~(1<<pin);
		PORTB |=(1<<pin);
		break;

		case 'C':
		DDRC &= ~(1<<pin);
		PORTC |=(1<<pin);
		break;

		case 'D':
		DDRD &= ~(1<<pin);
		PORTD |=(1<<pin);
		break;
	}
}
int Pin_state(char x,short y)
{
	setButton(x,y);
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
		while((PINB & _BV(y))!=_BV(y));
		_delay_ms(2);
		while((PINB & _BV(y))==_BV(y));
		_delay_ms(2);
		return 1;
		break;
		
		case 'C':
		while((PINC & _BV(y))!=_BV(y));
		_delay_ms(2);
		while((PINC & _BV(y))==_BV(y));
		_delay_ms(2);
		return 1;
		break;
		
		case 'D':
		while((PIND & _BV(y))!=_BV(y));
		_delay_ms(2);
		while((PIND & _BV(y))==_BV(y));
		_delay_ms(2);
		return 1;
		break;		
	}	

	return -1;
}

short button_state(char port, uint8_t pin, short debounce){
	setButton(port, pin);
	switch (port)
	{
		case 'A':
			if(PINA & (1<<pin)){
				if(debounce)
					_delay_ms(CONFIDENCE_TIME);
				return 0;	//button not pressed
			}else{
				if(debounce)
					_delay_ms(CONFIDENCE_TIME);
				return 1;	//button pressed
			}
			break;
		
		case 'B':
			if(PINB & (1<<pin)){
				if(debounce)
					_delay_ms(CONFIDENCE_TIME);
				return 0;	//button not pressed
			}else{
				if(debounce)
					_delay_ms(CONFIDENCE_TIME);
				return 1;	//button pressed
			}
			break;
		
		case 'C':
			if(PINC & (1<<pin)){
				if(debounce)
					_delay_ms(CONFIDENCE_TIME);
				return 0;	//button not pressed
			}else{
				if(debounce)
					_delay_ms(CONFIDENCE_TIME);
				return 1;	//button pressed
			}
			break;
		
		case 'D':
			if(PIND & (1<<pin)){
				if(debounce)
					_delay_ms(CONFIDENCE_TIME);
				return 0;	//button not pressed
			}else{
				if(debounce)
					_delay_ms(CONFIDENCE_TIME);
				return 1;	//button pressed
			}
			break;		
	}

	return -1;
}

short button_state_port(volatile uint8_t * port, uint8_t pin, short debounce){
	if(*port & (1<<pin)){
		if(debounce)
			_delay_ms(CONFIDENCE_TIME);
		return 1;
	}else{
		if(debounce)
			_delay_ms(CONFIDENCE_TIME);
		return 0;
	}
	

}

//PA0 nefunguje