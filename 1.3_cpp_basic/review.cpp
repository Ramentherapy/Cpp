#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
	fstream fs;
	char str[] = "bbbaaaccc";
	char rstr[16];
	memset(rstr, 0, sizeof(rstr));
	
	fs.open("1.txt", ios_base::out);
	if(fs.is_open())
	{
		cout << "open successfully" << endl;
	}
	else
	{
		cout << "fail to open" << endl;
	}
	
	fs.write(str, sizeof(str));
	// fs << str << endl;
	// fs << str << endl;
	
	fs.seekp(0);
	
	fs.read(rstr, sizeof(rstr));
	// fs >> rstr;
	
	cout << "read rstr: " << rstr << endl;
	cout << "sizeof(rstr): " << sizeof(rstr) << endl;
	
	fs.close();
	
	return 0;
}