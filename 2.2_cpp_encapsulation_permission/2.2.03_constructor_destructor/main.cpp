#include "person.hpp"

using namespace hospital;

int main()
{
	string name1 = "Sun";
	person *p2 = new person(name1);
	person *p1 = new person;
	p1->dining();
	p1->working();
	p1->shopping();
	
	return 0;
}