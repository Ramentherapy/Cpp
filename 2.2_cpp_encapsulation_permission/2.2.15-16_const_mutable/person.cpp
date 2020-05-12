#include "person.hpp"
#include <iostream>

hospital :: person :: person(string name):person_name(name) 
{
	this->person_age = 5;
	this->person_gender = "male";
}

void hospital :: person :: dining(void)
{
	cout << this->person_name << " is dining" << endl;
}

void hospital :: person :: shopping(void)
{
	cout << person_name << " is shopping" << endl;
}

void hospital :: person :: print(void)
{
	cout << this->person_name << endl;
	cout << this->person_age << endl;
	cout << this->person_gender << endl;
}

int hospital :: person :: test_for_const(void) const
{
	this->person_age++;
	return this->person_age;
}