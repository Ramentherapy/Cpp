#include <iostream>
#define case 1

using namespace std;

#if(case == 0)
int func1(const int *a, const int *b)
{
	return (*a + *b);	
}

int func2(const int &a, const int &b)
{
	return (a + b);
}

int main()
{
	int a = 2, b = 3;
	
	cout << "func1_result = " << func1(&a, &b) << endl;
	cout << "func2_result = " << func2(a, b) << endl;
	
	return 0;
}
#endif

#if(case == 1)
class test
{
public:
	int i = 2;
	int my_add(int a, int b) const; 
	int func1(void) const;
private:
	int a, b;
};

int test :: my_add(int a, int b) const 
{
	cout << "a + b = " << a + b << endl;
}

int test :: func1(void) const 
{
	// this->i = 5;
	cout << "this->i = " << this->i << endl;
}

int main()
{
	test t1;
	t1.my_add(4, 5);
	t1.func1();
	cout << "t1.i = " << t1.i << endl;
	return 0;
}
#endif