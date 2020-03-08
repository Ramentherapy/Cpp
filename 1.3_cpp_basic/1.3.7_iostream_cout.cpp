#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int val1 = 12;
	int val2 = 15;
	int val3 = 13;
	int val4 = 8;
	double dl = 123.456789;
	cout << val1 << " " << val2 << endl;
	cout << hex << val1 << " " << val2 << endl;
	cout << val3 << endl;
	cout << dec << val4 << endl;
	cout << setprecision(5) << dl << " "<< val1 << endl;
	cout << val1 << " " << val2 << " " << val3 << endl;
	return 0;
}

// output:
// 12 15
// c f
// d
// 8
// 123.46 12
// 12 15 13
