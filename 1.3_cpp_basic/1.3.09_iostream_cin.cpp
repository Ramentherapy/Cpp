#include <iostream>

using namespace std;

int main()
{
	int val1, val2;
	string s1, s2, s3;
	
	cout << "enter 2 nums" << endl;
	cin >> hex >> val1 >> val2;
	cout << val1 << " " << val2 << endl;
	cout << hex << val1 << " " << val2 << endl;
	
	cout << "enter 2 strings" << endl;
	
	cin >> s1 >> s2;
	cout << s1 << " " << s2 << endl;
	
	cout << "enter a string" << endl;
	cin >> s3;
	cout << s3 << endl;
	
	return 0;
}

// output:
// enter 2 nums
// 13 15
// 19 21
// 13 15
// enter 2 strings
// hello world
// hello world
// enter a string
// hello world
// hello
