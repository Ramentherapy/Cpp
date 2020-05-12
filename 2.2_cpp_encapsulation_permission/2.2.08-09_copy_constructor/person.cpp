#include "person.hpp"
#include <iostream>

void hospital :: person :: dining(void)
{
	cout << this->person_name << " is dining item" << endl;
}
void hospital :: person :: working(void)
{
	cout << this->person_name << " is coding" << endl;
}
void hospital :: person :: shopping(void)
{
	cout << person_name << " is shopping item" << endl;
	cout << person_name << "'s gender is " << person_gender << endl; 
}

void hospital :: person :: print(void)
{
	cout << this->person_name << endl;
	cout << this->person_age << endl;
	cout << this->person_gender << endl;
}

string gender[] = {"male", "female"};

hospital :: person :: person()
{
	this->person_name = "Harry";
	this->person_age = 45;
	this->person_gender = "xxx";
}

hospital :: person :: person(string name)
{
	// this->p = new int(45);
	this->p = new int[15];
	this->person_name = name;
	this->person_age = 45;
	this->person_gender = gender[1];
}

/*
hospital :: person :: person(string name): person_name(name), person_age(32), person_gender(gender[1])
{
	// this->p = new int(45);
	this->p = new int[15];
	// this->person_name = name;
	// this->person_age = 45;
	// this->person_gender = gender[1];
}
*/
// hospital :: person :: person(string name0, int age0, string gender0):person_name(name0), person_age(age0)
// {
	// person_gender = gender0;
	// this->p = new int[15];
// }

hospital :: person :: person(string name0, int age0, string gender0):person_name("kuku"), person_age(54)
{
	person_gender = "makaka";
	this->p = new int(35);
	// this->p = new int[15];
}
// hospital :: person :: person(string name3, int age3, string gender3):person_name(name3), person_age(age3)
// {    
	// this->person_gender = gender3;
	// this->p = new int[15];
// }

hospital :: person :: person(const person& pn):person_name(pn.person_name), person_age(pn.person_age)
{
	this->person_gender = pn.person_gender;
	cout << "this is copy constructor" << endl;
	this->p = new int(*(pn.p));

}

hospital :: person :: ~person()
{
	delete (this->p);
	// delete[] (this->p);
	cout << "destructor is working here" << endl;
}