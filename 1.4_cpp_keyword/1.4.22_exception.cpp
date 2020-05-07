#include <iostream>

using namespace std;

int main()
{
	int a, b;
	
	cout << "input 2 random numbers" << endl;
	cin >> a >> b;
	
	try
	{
		if(b == 0)
		{
			throw(1.2);
		}
		cout << "a/b = " << a/b << endl;
	}
	catch(int x)
	{
		
		cout << "1. b can not be 0" << endl;
	}
	
	catch(double x)
	{
		
		cout << "2. b can not be 0" << endl;
	}
	
	cout << "---end---" << endl;
	return 0;
}