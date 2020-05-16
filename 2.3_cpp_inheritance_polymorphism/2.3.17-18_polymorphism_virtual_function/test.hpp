#ifndef __TEST_HPP_
#define __TEST_HPP_

class Animal
{
public:
	virtual void speak(void);
};

class Dog: public Animal
{
public:
	void speak(void);
};

class Cat: public Animal
{
public:
	void speak(void);
};


#endif