void func2();

namespace scope2
{
	void func4()
	{
		
		
	}
}

using namespace scope2;
namespace scope1
{
	void func3()
	{
		
	}

	void func1()
	{
		::func2();//access default namespace function in other namespace
		func2();//access default namespace function in other namespace, '::'is not necessary
		func3();//use namespace function in the same namespace
		// scope2::func4();//access other namespace(except for default namespace) function
		func4();//access other namespace(except for default namespace) function
	}
}

int main()
{

	
	return 0;
}

void func2()//default namespace function
{
	
}