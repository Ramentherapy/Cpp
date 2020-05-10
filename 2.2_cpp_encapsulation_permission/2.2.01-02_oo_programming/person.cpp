#include "person.hpp"
#include <iostream>

void hospital :: person :: dining(void)
{
	cout << this->person_name << " is dining item" << endl;
}
void hospital :: person :: working(void)
{
	if(this->person_gender)
	{
		cout << this->person_name << " is coding" << endl;
	}
	else
	{
		cout << this->person_name << " is shopping" << endl;
	}
}
void hospital :: person :: shopping(void)
{
	cout << person_name << " is shopping item" << endl;
}