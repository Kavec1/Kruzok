#ifndef Button_H_
#define Button_H_

#define is_high(y) (PINB & _BV(y) == _BV(y)) //=nestlačené kontrola, ci je nastaveny y-ty bit registra 'x'
#define is_low(y) ((PINB & _BV(y)) != _BV(y)) //=stlačené kontrola, ci je vstupny pin nastaveny na logicku nulu
void setBUT(char x,int,y);  
int BUT_state();
  
void setBut(char x,int y)
{
	switch(x)
    {
        case 'A':
            DDRA |=(0<<y);
            PORTA |=(1<<y);
            break;

        case 'B':
            DDRB |=(0<<y);
            PORTB |=(1<<y);
            break;

        case 'C':
            DDRC |=(0<<y);
            PORTC |=(1<<y);
            break;

        case 'D':
            DDRD |=(0<<y);
            PORTD |=(1<<y);
            break;       
    }
}
int BUT_state()
{
  if (is_low(PB2/3)
  {
     if (is_high(PB2/3))
	  {
		 return 1;
	  }
  }
  return 0;
}
#endif /* Button_H_ */
