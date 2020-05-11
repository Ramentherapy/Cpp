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
	int person_age;
	string person_gender;
	int *p;
	
	person();
	person(string name = "aads");
	person(string name0, int age0, string gender0 = "adad");
	
	// person(string name1 = "Mulan", int age1 = 19, string gender1 = "female");
	~person();
	
	void dining(void);
	void working(void);
	void shopping(void);
	void print(void);
	
private:
};
}
#endif