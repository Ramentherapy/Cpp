#ifndef __MAN_M_
#define __MAN_M_

#include <iostream>
#include "person.hpp"

class man:public person
{
public:	
	void test(void);
	void ViewAge(void);
	void PrintName(void);
	void ChangeAndViewName(string m_name);
	man()
	{
		cout << "man()" << endl;
	}
	~man()
	{
		cout << "~man()" << endl;
	}
private:

protected:	
};

#endif