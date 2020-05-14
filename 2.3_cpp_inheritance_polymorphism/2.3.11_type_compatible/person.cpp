#include "person.hpp"
#include <iostream>

using namespace std;

person :: person(string name):person_name(name), person_age(15), person_gender("male")
{
	cout << "person(string name)" << endl;
}

void person :: ChangeAndViewName(string cv_name)
{
	cout << "Original name = " << person_name << endl;
	this->person_name = cv_name;
	cout << "Current name = " << person_name << endl;
}

void person :: PrintProperty(void)
{
	cout << "-------------" << endl;
	cout << "person_name = " << person_name << endl;
	cout << "person_age = " << person_age << endl;
	cout << "person_gender = " << person_gender << endl;
	ViewAge();
	cout << "-------------" << endl;
}

void person :: ViewAge(void)
{
	cout << "Current age is " << person_age << endl;
}