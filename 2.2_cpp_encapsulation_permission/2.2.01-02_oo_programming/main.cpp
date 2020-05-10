#include "person.hpp"

using namespace hospital;

int main()
{
	person eric;
	
	eric.person_name = "Eric";
	eric.person_age = 45;
	eric.person_gender = 1;
	eric.dining();
	eric.working();
	eric.shopping();
	
	return 0;
}