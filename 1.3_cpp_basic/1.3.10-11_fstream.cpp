#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream fs;
	char r[16] = "abc";
	char rstr[16] = {0};
	char buf[] = "Linux";
	
	fs.open("1.txt");
	if(fs.is_open())
	{
		cout << "open success" << endl;
	}
	else
	{
		cout << "open fail" << endl;
	}
	
	// fs << buf;
	// fs.write(buf, sizeof(buf));
	fs.read(rstr, sizeof(rstr));
	cout << "read content: " << rstr << endl;
	fs.close();
	
	cout << "sizeof(buf) = " << sizeof(buf) << endl;
	cout << "sizeof(rstr) = " << sizeof(rstr) << endl;
	cout << "sizeof(r) = " << sizeof(r) << endl;
	
	return 0;
}

// output:
// open success
// read content: Linux
// sizeof(buf) = 6
// sizeof(rstr) = 16
// sizeof(r) = 16
