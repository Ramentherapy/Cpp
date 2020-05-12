#include "person.hpp"
#include <iostream>
using namespace hospital;

void PrintAge(const person &po)
{
	// po.person_name = "xxx";
	// cout << "PrintAge result: " << po.person_age << endl;
	// cout << "PrintAge result: " << po.person_name << endl;
	cout << "person age = " << po.test_for_const() << endl;
}


int main()
{
	string name_0 = "Kevin";
	person*p1 = new person(name_0);
	p1->print();
	cout << "test for const result: " << p1->test_for_const() << endl;
	
	PrintAge(*p1);
	
	delete(p1);
	return 0;
}