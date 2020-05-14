#include "person.hpp"
#include "man.hpp"
#include <iostream>

#define case 2

using namespace std;

int main()
{
	
#if(case == 0)
	person *p0 = new person("Lee");
	p0->PrintProperty();
	p0->ChangeAndViewName("Andrew");
	delete(p0);
	
	cout<< "\n<------------test2------------>" << endl;
	person p1("Jack");
	p1.PrintProperty();
	p1.ChangeAndViewName("Alice");
	
	cout<< "\n<------------test3------------>" << endl;
	man p2;
	p2.PrintName();
	p2.ChangeAndViewName("May");
	p2.PrintProperty();
#endif

#if(case == 1)
	man *p1 = new man;
	delete(p1);

// output:	
// person()
// man()
// ~man()
// ~person()
#endif	

#if(case == 2)
	man *p1 = new man;
	p1->test();
	delete(p1);
#endif

	return 0; 
}