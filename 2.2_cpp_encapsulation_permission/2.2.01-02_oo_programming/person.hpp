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
	bool person_gender;
	void dining(void);
	void working(void);
	void shopping(void);
	
private:
};
}
#endif