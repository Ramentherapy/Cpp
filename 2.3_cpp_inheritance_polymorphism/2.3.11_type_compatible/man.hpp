#ifndef __MAN_M_
#define __MAN_M_

#include <iostream>
#include "person.hpp"

class man:public person
{
public:	
	void PrintName(void);
	
	man():person()
	{
		cout << "man()" << endl;
	}
	man(string name):person(name)
	{
		cout << "man(string name)" << endl;
	}
	~man()
	{
		cout << "~man()" << endl;
	}
private:

protected:	
};

#endif