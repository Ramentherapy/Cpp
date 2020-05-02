#include <iostream>
#include <string> 

using namespace std;

int main()
{
	string s1, s2, s3;
	
	s1 = "I love";
	s2 = "Linux";
	s3 = s1 + s2;
	
	cout << s1 << s2 << endl;
	cout << s3 << endl;
	
	s1 = s1.append(s2);
	cout << "s1 " << s1 << endl;
	cout << "s2 " << s2 << endl;
	
	return 0;
}
 