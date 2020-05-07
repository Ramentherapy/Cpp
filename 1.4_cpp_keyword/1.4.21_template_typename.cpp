#include <iostream>

using namespace std;

template <typename T>

T add(T a, T b)
{
	return (a + b);
}

int main()
{
	int x = 3, y = 2;
	double x1 = 3.4, y1 = 2.8;
	cout << "a+b= " << add(x, y) << endl;
	cout << "a1+b1= " << add(x1, y1) << endl;
	
	return 0;
}