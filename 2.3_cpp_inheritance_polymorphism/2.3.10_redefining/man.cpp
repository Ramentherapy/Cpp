#include "man.hpp"
#include "person.hpp"
#include <iostream>

using namespace std;

void man :: PrintName(void)
{
	cout << "current person name is "<< person_name << endl;
}

void man :: ChangeAndViewName(string m_name)
{
	cout << "just for testing, it will not change name to " << m_name << endl;
}

void man :: ViewAge(void)
{
	cout << "just for testing, and person_age is " << person_age << endl;
}

void man :: test(void)
{
	person :: ViewAge();
}