#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	// auto a = 5, b = 6;
	// cout << "typeid(a)= " << typeid(a).name() << endl;
	
	// double i = 5;
	// decltype(i) j;
	// decltype(i) j = 6;
	// cout << "typeid(j)= " << typeid(j).name() << endl;
	
	
	// const int a = 5;
	// auto b = a;
	// b = 3;
	// cout << "typeid(b) = " << typeid(b).name() << endl;
	
	
	//error case
	
	// const int a = 5;
	// decltype(a) b = 6;
	// b = 3;
	// cout << "typeid(b) = " << typeid(b).name() << endl;
	
	return 0;
}