#include "person.hpp"
#include "man.hpp"
#include <iostream>

using namespace std;

int main()
{
	person *p0 = new person("Lee");
	p0->PrintProperty();
	p0->ChangeAndViewName("Andrew");
	delete(p0);
	
	cout<< "\n<------------test2------------>" << endl;
	person p1("Jack");
	p1.PrintProperty();
	p1.ChangeAndViewName("Alice");
	
	cout<< "\n<------------test3------------>" << endl;
	man p2;
	p2.PrintName();
	p2.ChangeAndViewName("May");
	p2.PrintProperty();
	
	return 0; 
}