#ifndef __PERSON_H__
#define __PERSON_H__

#include <string>
using namespace std;
namespace hospital
{

class person
{
public:
	string person_name;
	string person_gender;
	
	person();
	person(string name);
	~person();
	
	void working(void);
	void shopping(void);
	int read_age(void);
	void write_age(int age);
private:
	int person_age;
	void dining(void);
};
}
#endif