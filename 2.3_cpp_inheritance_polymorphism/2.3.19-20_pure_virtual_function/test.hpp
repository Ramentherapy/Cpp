#ifndef __TEST_HPP__
#define __TEST_HPP__

class Animal
{
public:
	virtual void speak(void) = 0;
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

class Wolf: public Animal
{
public:
	void print(void);
	void speak(void);
};

#endif