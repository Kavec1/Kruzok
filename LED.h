#ifndef LED_H_
#define LED_H_

#include "init.h"

#define sbi(x,y) x |= _BV(y)	//set bit- nastavenie bitu
#define cbi(x,y) x &= (~(_BV(y)))	//clear bit - nulovanie bitu
#define tbi(x,y) x ^=_BV(y)		//toggle bit - zmena bitu

//Funkcia na nastavenie stavu LEDky
/* 
    port - A, B, C, D
    pin - cislo od 0 po 7
    status - 0 = vypnuta, 1 = zapnuta, 2 = zmen stav zo zapnutej na vypnutu a vice versa
*/
void led_state(char port, short pin, short status);



#endif /* LED_H_ */
