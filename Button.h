#ifndef Button_H_
#define Button_H_

#define is_high(y) (PINB & _BV(y) == _BV(y)) //=nestlačené kontrola, ci je nastaveny y-ty bit registra 'x'
#define is_low(y) ((PINB & _BV(y)) != _BV(y)) //=stlačené kontrola, ci je vstupny pin nastaveny na logicku nulu
void setButton(char x,int,y);  
int Pin_state();

#endif /* Button_H_ */
