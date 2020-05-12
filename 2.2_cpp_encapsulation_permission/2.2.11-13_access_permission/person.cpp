#include "person.hpp"
#include <iostream>

void hospital :: person :: dining(void)
{
	cout << this->person_name << " is dining item" << endl;
}
void hospital :: person :: working(void)
{
	cout << this->person_name << " is coding" << endl;
	cout << "person_age = " << this->person_age << endl;
	dining();
}
void hospital :: person :: shopping(void)
{
	cout << person_name << " is shopping item" << endl;
	cout << person_name << "'s gender is " << person_gender << endl; 
}

string gender[] = {"male", "female"};

hospital :: person :: person()
{
	
	this->person_name = "Harry";
	this->person_age = 45;
	this->person_gender = gender[0];
}

hospital :: person :: person(string name)
{
	
	this->person_name = name;
	this->person_age = 45;
	this->person_gender = gender[1];
}

int hospital :: person :: read_age(void)
{
	return this->person_age;
}

void hospital :: person :: write_age(int age)
{
	this->person_age = age;
}