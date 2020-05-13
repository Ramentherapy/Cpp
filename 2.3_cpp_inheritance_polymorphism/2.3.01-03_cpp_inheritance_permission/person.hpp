#ifndef __PERSON_P_
#define __PERSON_P_

#include <string>
using namespace std;

class person
{
public:	
	string person_name;
	int person_age;
	string person_gender;
	
	person():person_name("xxx"), person_age(0), person_gender("xxx"){}
	person(string name);
	~person(){}
	
	void ChangeAndViewName(string cv_name);
	void PrintProperty(void);
private:
	void ViewAge(void);

protected:
};

#endif