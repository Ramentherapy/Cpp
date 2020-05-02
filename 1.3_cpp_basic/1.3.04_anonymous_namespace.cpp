#include <iostream>

using namespace std;

//anonymous namespace: like a default namespace in this file, 
//but it can not be used with a external cpp file(like static in C)
namespace
{
	void f2()
	{
		
	}
}

//normal namespace
namespace s1
{
	void f1()
	{
		f2();
	}
	
}


int main()
{
	cout << "Hello" << endl;
	// std::cout << "Hello" << std::endl;
	//using "cout" and "endl" without "using namespace std;"
	
 	s1::f1();
	f2();
	
	// f3();
	/* f3(); ERROR: we can not use a external anonymous namespace here*/
	
	return 0;
}