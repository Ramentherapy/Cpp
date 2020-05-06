#include <iostream>

using namespace std;

int main()
{
	const int a = 5;
	// int *b = (int*)&a;
	int *b = const_cast<int *>(&a);
	*b = 6;
	
	cout << &a << endl;
	cout << b << endl;
	cout << "*b " << *b << endl;
	cout << "a " << a << endl;
	
	return 0;
}