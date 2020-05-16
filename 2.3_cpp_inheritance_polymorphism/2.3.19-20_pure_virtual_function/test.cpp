#include "test.hpp"
#include <iostream>

using namespace std;

// void Animal :: speak(void)
// {
	// cout << "Animal speak" << endl;
// }

void Dog :: speak(void)
{
	cout << "Dog speak" << endl;
}

void Cat :: speak(void)
{
	cout << "Cat speak" << endl;
}

void Wolf :: print(void)
{
	cout << "Wolf print" << endl;
}

void Wolf :: speak(void)
{
	cout << "Wolf speak" << endl;
}

int main(void)
{
	Dog a1;
	a1.speak();
	
	Cat a2;
	a2.speak();
	
	Animal *p1 = &a1;
	p1->speak();
	
	Animal *p2 = &a2;
	p2->speak();
	
	// Animal a3;
	// a3.speak();
	
	Wolf a4;
	a4.print();
	return 0;
}