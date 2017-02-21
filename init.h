#ifndef init_H_
#define init_H_

#ifndef F_CPU
#define F_CPU	8000000UL	//definicia frekvencie CPU
#endif

#define sbi(x,y) x |= _BV(y)	//set bit- nastavenie bitu
#define cbi(x,y) x &= (~(_BV(y)))	//clear bit - nulovanie bitu
#define tbi(x,y) x ^=_BV(y)		//toggle bit - zmena bitu

#define is_high(y) (PINB & _BV(y) == _BV(y)) //=nestlačené kontrola, ci je nastaveny y-ty bit registra 'x'
#define is_low(y) ((PINB & _BV(y)) != _BV(y)) //=stlačené kontrola, ci je vstupny pin nastaveny na logicku nulu

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#endif /* init_H_ */
