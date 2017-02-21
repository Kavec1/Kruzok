#ifndef LED_H_
#define LED_H_

#define sbi(x,y) x |= _BV(y)	//set bit- nastavenie bitu
#define cbi(x,y) x &= (~(_BV(y)))	//clear bit - nulovanie bitu
#define tbi(x,y) x ^=_BV(y)		//toggle bit - zmena bitu
void setLED(char x,int y)

void setLED(char x,int y)
{
	switch(x)
    {
        case 'PA':
            DDRA |=(1<<xy);
            break;

        case 'PB':
            DDRB |=(1<<xy);
            break;

        case 'PC':
            DDRC |=(1<<xy);
            break;

        case 'PD':
            DDRD |=(1<<xy);
            break;       
    }
}

#endif /* LED_H_ */
