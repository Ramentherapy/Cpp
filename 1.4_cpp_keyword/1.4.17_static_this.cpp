#include <iostream>

using namespace std;

class A
{
public: 
	int j;
	void func1();
	
	static int i;
	static void func2();
};

void A::func1()
{
	cout << "j = " << j << endl;
}

void A::func2()
{
	cout << "func2()" << endl;
}

int main()
{
	A::func2();
	A a;
	a.j = 23;
	a.func1();
	
	return 0;
}