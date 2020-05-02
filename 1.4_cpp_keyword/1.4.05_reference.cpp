#include <iostream>

using namespace std;

struct s1
{
	int a;
	int& b;
};

struct s2
{
	char a;
	char& b;
};

int main()
{
	cout << sizeof(struct s1) << endl;
	cout << sizeof(struct s2) << endl;

	return 0;
}


// result:

// 16
// 16

