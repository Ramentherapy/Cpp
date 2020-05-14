#ifndef __MAN_M_
#define __MAN_M_

#include <iostream>
#include "person.hpp"

class man:public person
{
public:	
	void PrintName(void);
	
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