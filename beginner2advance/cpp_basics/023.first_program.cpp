#include <iostream>

using namespace std;

int main()
{
	string name;
	
	cout << "May I know your name?" << endl;
	getline(cin, name);
	cout << "Good morning " << name << endl;
	
	return 0;
}