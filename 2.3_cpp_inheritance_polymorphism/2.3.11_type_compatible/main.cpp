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
	// man p1;
	// person &p2 = p1;
	// cout << p2.person_age << endl;
	
	// person p2;
	// man *p3 = &p2;
	// cout << p3->person_age << endl;
	
	// man p1;
	// p1.ChangeAndViewName("Chris");
	// person p2 = p1;
	// cout << p2.person_name << endl;
	
	

	// man *p1 = new man("Chris");
	// person *p2 = p1;
	// cout << p2->person_name << endl;
	// cout << p2->person_age << endl;
	// cout << p2->person_gender << endl;
	// delete(p1);
/*		
output:
person(string name)
man(string name)
Chris
15
male
~man()
~person()
*/

	
	
	// man p1("Chris");
	// person p2 = p1;
	// cout << p2.person_name << endl;
	// cout << p2.person_age << endl;
	// cout << p2.person_gender << endl;
/*	
output:
person(string name)
man(string name)
Chris
15
male
~person()
~man()
~person()
*/

	// man *p1 = new man("Chris");
	// person &p2 = *p1;
	// cout << p2.person_name << endl;
	// cout << p2.person_age << endl;
	// cout << p2.person_gender << endl;
	// delete(p1);
/*
output:
person(string name)
man(string name)
Chris
15
male
~man()
~person()
*/
#endif
	return 0; 
}