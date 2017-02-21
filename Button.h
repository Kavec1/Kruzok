#ifndef Button_H_
#define Button_H_

#define is_high(y) (PINB & _BV(y) == _BV(y)) //=nestlačené kontrola, ci je nastaveny y-ty bit registra 'x'
#define is_low(y) ((PINB & _BV(y)) != _BV(y)) //=stlačené kontrola, ci je vstupny pin nastaveny na logicku nulu
void setBUT(char x,int,y)  
  
void setBut(char x,int y)
{
	switch(x)
    {
        case 'PA':
            DDRA |=(0<<xy);
            PORTA |=(1<<xy);
            break;

        case 'PB':
            DDRB |=(0<<xy);
            PORTB |=(1<<xy);
            break;

        case 'PC':
            DDRC |=(0<<xy);
            PORTC |=(1<<xy);
            break;

        case 'PD':
            DDRD |=(0<<xy);
            PORTD |=(1<<xy);
            break;       
    }
}

#endif /* Button_H_ */
