#ifndef Button_H_
#define Button_H_
#include "init.h"

#define is_high(y) (PINA & _BV(y) == _BV(y)) //=nestlačené kontrola, ci je nastaveny y-ty bit registra 'x'
#define is_low(y) ((PINA & _BV(y)) != _BV(y)) //=stlačené kontrola, ci je vstupny pin nastaveny na logicku nulu

#define CONFIDENCE_TIME 100

void setButton(char port,short pin);
int Pin_state(char x,short y);
short button_state(char port, uint8_t pin, short debounce);
short button_state_port(volatile uint8_t * port, uint8_t pin, short debounce);


#endif /* Button_H_ */
