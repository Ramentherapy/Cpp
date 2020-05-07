#include <iostream>
#define case 4
using namespace std;


int main()
{
#if(case == 0)	
	int *p = (int *)malloc(sizeof(int));
	*p = 5;
	cout << "*p = " << *p << " p = " << p << endl;
	free(p);
#endif

#if(case == 1)
	int *p = new int;
	*p = 5;
	cout << "*p = " << *p << " p = " << p << endl;
	delete p;
#endif

#if(case == 2)
	int *p = new int;
	cout << "*p = " << *p << " p = " << p << endl;
	delete p;
#endif

#if(case == 3)
	int *p = new int(56);
	cout << "*p = " << *p << " p = " << p << endl;
	delete p;
#endif

#if(case == 4)
	double *p = new double(5.635);
	cout << "*p = " << *p << " p = " << p << endl;
	delete p;
#endif
	return 0;
}