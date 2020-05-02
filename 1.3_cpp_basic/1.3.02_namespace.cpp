namespace scope1
{
	void func1()
	{
		
	}

	void func2()
	{
		
	}
	
	void func3()
	{
		
	}
}

using scope1 :: func2; // access method2
using namespace scope1;// access method3

namespace scope2{extern void func4();}; // declare a namespace method1
namespace scope2{void func4();};		// declare a namespace method2

int main()
{
	scope1 :: func1(); //access method1
	func2();
	func3();
	
	// scope2 :: func4();
	// scope2 :: func4(); in this case, compile two cpp file simultaneously
	
	return 0;
}