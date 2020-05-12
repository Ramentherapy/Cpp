#include "person.hpp"
#include <iostream>
using namespace hospital;

int main()
{
	person *p1 = new person;
	// cout << "p1->person_age " << p1->person_age << endl;
	// cout << "p1->dining " << p1->dining() << endl;
	
	cout << "p1->person_name " << p1->person_name << endl;
	p1->working();
	cout << "-----------" << endl;
	cout << p1->read_age() << endl;
	p1->write_age(555);
	cout << p1->read_age() << endl;
	return 0;
}