#include <iostream>

using namespace std;

//case1
enum class day : unsigned int 
{
	MON,
	TUE,
	WED,
};
//case2
enum class day2
{
	MON,
	TUE,
	WED,
};
//case3
enum day3
{
	MON,
	TUE,
	WED,
};

int main()
{
	day2 today;
	
	today = day2::WED;
	// today = WED;
	cout << (unsigned int)today << endl;
	
	return 0;
}

//case3 is the same as the condition in C, using 'cout' can get the number without 'unsigned int'
//add the 'class' to enum definition, then we can not use 'cout' to get the number without (unsigned int)