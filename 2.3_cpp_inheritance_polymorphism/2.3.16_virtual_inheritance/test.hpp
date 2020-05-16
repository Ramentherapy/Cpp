#ifndef __TEST_HPP__
#define __TEST_HPP__

#include <iostream>
#include <string>

using namespace std;

class A
{
public: 
	string name;
	int age;
	string gender;
	
	A():name("1.XXX"){}
	A(string x_name):name(x_name){}
	~A(){}
	
	void print_name(void);
private:
	
protected:
};

void A :: print_name(void)
{
	cout << "in A: name is " << this->name << endl;
}

class B
{
public: 
	string name;
	int age;
	string gender;
	
	B():name("2.XXX"){}
	B(string x_name):name(x_name){}
	~B(){}
	
	void print_name(void);
private:
	
protected:
};

void B :: print_name(void)
{
	cout << "in B: name is " << this->name << endl;
}

class C:public A, public B
{
public:
	void print_name(void);
};

void C :: print_name(void)
{
	A :: print_name();
}

class D: virtual public A
{
	
};

class E: virtual public A
{
	
};

class F:public D, public E
{
public: 
	// void print_name(void);
};

// void F:: print_name(void)
// {
	// cout << "in F:: name is " << this->D::name << endl;
// }
#endif