#include <iostream>

using namespace std;

namespace space1{void func3();};

namespace space1
{	
	namespace space2
	{
		void func2()
		{
			cout << endl;
			cout << "This is space1::space2::func2()" << endl;
			cout << endl;
		}
		
		void func1()
		{
			cout << endl;
			cout << "This is space1::space2::func1()" << endl;
			func3();
			cout << endl;
		}
	}

	void func3()
	{
		cout << endl;
		cout << "This is space1::func3()" << endl;
		space2::func2();
		cout << endl;
	}
}

int main()
{
	space1::space2::func1();
	space1::space2::func2();
	space1::func3();
		
	return 0;
}

// output:

// This is space1::space2::func1()

// This is space1::func3()

// This is space1::space2::func2()




// This is space1::space2::func2()


// This is space1::func3()

// This is space1::space2::func2()



