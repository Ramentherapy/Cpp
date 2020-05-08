#include <stdio.h>
#include <unistd.h>
typedef void (*ons)(void);
typedef void (*offs)(void);
typedef void (*delays)(void);

struct Led
{
	ons p_on;
	offs p_off;
	delays p_delay;
};

void on(void)
{
	printf("led on\n");
}

void off(void)
{
	printf("led off\n");
}

void delay(void)
{
	sleep(1);
}

int main()
{
	struct Led l1, l2, l3;
	l1.p_on = on;
	l1.p_off = off;
	l2.p_on = on;
	l2.p_off = off;
	l3.p_on = on;
	l3.p_off = off;
	l1.p_delay = delay;
	l2.p_delay = delay;
	l3.p_delay = delay;
	while(1)
	{	
		l1.p_on();
		l2.p_off();
		l3.p_off();
		l1.p_delay();
		
		l1.p_off();
		l2.p_on();
		l3.p_off();
		l2.p_delay();
		
		l1.p_off();
		l2.p_off();
		l3.p_on();
		l3.p_delay();
	}
	
	return 0;
}