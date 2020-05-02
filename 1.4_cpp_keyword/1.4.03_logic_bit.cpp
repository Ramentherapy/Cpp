#include <iostream>

using namespace std;

int main()
{
	int a = 2, b = 6;
	bool c = 1;
	
	// if( (a > 3) && (b < 3) )
	if( (a > 3) and (b < 3) )
	{
		cout << "ok" << endl;
 	}
	else
	{
		cout << "a = " << a << " b = " << b << endl;
	}
	
	cout << "c = " << c << endl;
	cout << boolalpha <<"c = " << c << endl;
	
	return 0;
}



// result:

// a = 2 b = 6
// c = 1
// c = true
