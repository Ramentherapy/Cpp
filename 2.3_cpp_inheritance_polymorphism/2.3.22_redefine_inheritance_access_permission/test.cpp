#include "test.hpp"
#include <iostream>

using namespace std;

void Animal :: speak(void)
{
	cout << "Animal speak" << endl;
}

// void Dog :: speak(void)
// {
	// cout << "Dog speak" << endl;
// }

void Dog :: test(void)
{
	speak();
}

int main(void)
{

	// Dog a1;
	// a1.speak();
	
	Dog a2;
	Animal *p1 = &a2;
	p1->speak();
	
	return 0;
}