#include <iostream>

using namespace std;

int main()
{
	// unsigned int *p = reinterpret_cast<unsigned int *>(0x530000e0);
	// unsigned int *p = (unsigned int*)(0x00000010);
	// *p = 14;
	
	int a = 5;
	int* p = &a;
	void* b = p;
	int *b1 = static_cast<int*>(b);
	cout << *b1 << endl;
	
	return 0;
}