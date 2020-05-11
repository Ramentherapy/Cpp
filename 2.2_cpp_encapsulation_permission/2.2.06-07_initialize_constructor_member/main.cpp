#include "person.hpp"
#include <iostream>
#define case 3
using namespace hospital;

int main()
{

#if(case == 0)
	string name1 = "Sun";
	person *p2 = new person(name1);
	person *p1 = new person;
	p1->dining();
	p1->working();
	p1->shopping();
	delete(p1);
	
// output:
// Harry is dining item
// Harry is coding
// Harry is shopping item
// Harry's gender is male
// destructor is working here

//using "new" to allocate heap memory for object, 
//it will not use destructor automatically,
//we need to use "delete" to realize destructor manually(explicitly).
#endif
	
#if(case == 1)
	// person p1; //use default value
	string name1 = "Sun";
	person p1(name1); // create an object with specific parameter 
	p1.dining();
	p1.working();
	p1.shopping();

// output:
// Sun is dining item
// Sun is coding
// Sun is shopping item
// Sun's gender is female
// destructor is working here

// when an object is allocated in stack memory,
// it will use destructor automatically after stack memory release 
#endif	

#if(case == 2)
	string name1 = "Zack";
	person p1(name1);
	*(p1.p) = 2;
	*(p1.p+1) = 3;
	cout << *(p1.p) << endl;
	cout << *(p1.p+1) << endl;
	cout << *(p1.p+2) << endl;
	cout << *(p1.p+3) << endl;
	p1.shopping();
	cout << "----------" << endl;
	p1.print();
// output:
// 2
// 3
// 0
// 0
// Zack is shopping item
// Zack's gender is female
// destructor is working here
#endif

#if(case == 3)
	// person p1("Louis", 24, "male");
	person p1;
	p1.shopping();
	cout << "----------" << endl;
	p1.print();
#endif
	return 0;
}