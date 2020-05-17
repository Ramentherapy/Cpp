#include "test.hpp"
#include <iostream>

using namespace std;

// void Animal :: speak(void)
// {
	// cout << "Animal speak" << endl;
// }

Animal :: ~Animal()
{
	cout << "Animal destructor" << endl;
}

Dog :: ~Dog()
{
	cout << "Dog destructor" << endl;
}


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
	// Dog d1;
	// Animal *p1 = &d1;
	// p1->speak();
	
	Animal *p2 = new Dog();
	p2->speak();
	delete p2;
	
	return 0;
}