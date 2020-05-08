#include <iostream>
#include <unistd.h>

using namespace std;

struct Led
{
public: 
	int lednum;
	void ledon(void);
	void ledoff(void);
	void my_sleep(void);
private:
	
};

void Led :: ledon(void)
{
	cout << "Led " << lednum << "on" << endl;
}

void Led :: ledoff(void)
{
	cout << "Led " << lednum << "off" << endl;
}

void Led :: my_sleep(void)
{
	sleep(2);
}

int main()
{
	while(1)
	{
		Led l1, l2, l3;
		l1.lednum = 1, l2.lednum = 2, l3.lednum = 3;
		
		l1.ledon();
		l2.ledoff();
		l3.ledoff();
		l1.my_sleep();
		
		l1.ledoff();
		l2.ledon();
		l3.ledoff();
		l2.my_sleep();
		
		l1.ledoff();
		l2.ledoff();
		l3.ledon();
		l3.my_sleep();
	}
	
	return 0;
}