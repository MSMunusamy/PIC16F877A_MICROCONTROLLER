
//When you press a button that time led will blink

#include<htc.h>
__CONFIG(0x1F7A);
int main()
{
	TRISB0 = 1;
	TRISB1 = 0;	
	RB0    = 0;
	RB1    = 0;
	while(1)
	{
	if(RB0==1)
	{
	  RB1=RB0;
	}
	else
		RB0=1;
	}
	
}
