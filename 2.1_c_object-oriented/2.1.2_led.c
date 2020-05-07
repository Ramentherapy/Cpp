#include <stdio.h>
#include <unistd.h>
void L1onL2offL3off();
void L1offL2onL3off();
void L1offL2offL3on();

int main()
{
	while(1)
	{
		L1onL2offL3off();
		sleep(1);
		L1offL2onL3off();
		sleep(1);
		L1offL2offL3on();
		sleep(1);
	}
	
	return 0;
}

void L1onL2offL3off()
{
	printf("led1 on\n");
	printf("led2 off\n");
	printf("led3 off\n");
}

void L1offL2onL3off()
{
	printf("led1 off\n");
	printf("led2 on\n");
	printf("led3 off\n");
}

void L1offL2offL3on()
{
	printf("led1 off\n");
	printf("led2 off\n");
	printf("led3 on\n");
}