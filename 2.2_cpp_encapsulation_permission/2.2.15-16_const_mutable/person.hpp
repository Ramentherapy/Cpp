#ifndef __PERSON_H__
#define __PERSON_H__

#include <string>
using namespace std;
namespace hospital
{
class person
{
public:
	mutable string person_name;
	mutable int person_age;
	string person_gender;
	
	person(){};
	person(string name);
	void dining(void);
	void shopping(void);
	void print(void);
	int test_for_const(void) const;
private:
};
}
#endif