#include "LED.h"
#include "init.h"

void set_ddr(volatile uint8_t * ddr, uint8_t pin, short state){
	if(state){
		*ddr |= 1<<pin;
	}else{
		*ddr &= ~(1<<pin);
	}
}

void led_state_port(volatile uint8_t * port, uint8_t pin, short state){
	switch(state){
		case 0:
			*port &= ~(1<<pin);
			break;
		case 1:
			*port |= 1<<pin;
			break;
		case 2:
			*port ^= 1<<pin;
			break;
	}
}

void led_state(char port, short pin, short status)
{
	switch(port)
	{
		case 'A':
			DDRA |=(1<<pin);
			switch(status)
			{
				case 0:
					PORTA &= ~(1<<pin);
					break;
				case 1:
					PORTA |= (1<<pin);
					break;
				case 2:
					PORTA ^= (1<<pin);
					break;
			}
			break;

		case 'B':
			DDRB |=(1<<pin);
			switch(status)
			{
				case 0:
					PORTB &= ~(1<<pin);
					break;
				case 1:
					PORTB |= (1<<pin);
					break;
				case 2:
					PORTB ^= (1<<pin);
					break;
			}
			break;

		case 'C':
			DDRC |=(1<<pin);
			switch(status)
			{
				case 0:
					PORTC &= ~(1<<pin);
					break;
				case 1:
					PORTC |= (1<<pin);
					break;
				case 2:
					PORTC ^= (1<<pin);
					break;
			}
			break;

		case 'D':
			DDRD |=(1<<pin);
			switch(status)
			{
				case 0:
					PORTD &= ~(1<<pin);
					break;
				case 1:
					PORTD |= (1<<pin);
					break;
				case 2:
					PORTD ^= (1<<pin);
					break;
			}
			break;
	}
}
