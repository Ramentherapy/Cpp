#include <iostream>
#define case 2
using namespace std;

void my_swap1(int x, int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}

void my_swap2(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

void my_swap3(int& x, int& y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 2, b = 5;

#if case == 0
	cout << "a = " << a << " b = " << b << endl;
	my_swap1(a, b);
	cout << "a = " << a << " b = " << b << endl;
#endif

#if case == 1	
	cout << "a = " << a << " b = " << b << endl;
	my_swap2(&a, &b);
	cout << "a = " << a << " b = " << b << endl;
#endif

#if case == 2
	cout << "a = " << a << " b = " << b << endl;
	my_swap3(a, b);
	cout << "a = " << a << " b = " << b << endl;
#endif
	return 0;
}

// result

// case1:
// a = 2 b = 5
// a = 2 b = 5
// case2:
// a = 2 b = 5
// a = 5 b = 2
// case3:
// a = 2 b = 5
// a = 5 b = 2
