#ifndef __PERSON_P_
#define __PERSON_P_

#include <iostream>
#include <string>
using namespace std;

class person
{
public:	
	string person_name;
	int person_age;
	string person_gender;
	
	person():person_name("xxx"), person_age(2), person_gender("xxx")
	{
		cout << "person()" << endl;
	}
	person(string name);
	~person()
	{
		cout << "~person()" << endl;
	}
	
	void ChangeAndViewName(string cv_name);
	void PrintProperty(void);
	void test(void);
	void ViewAge(void);
private:
	

protected:
	
};

#endif