#ifndef __TEST_HPP__
#define __TEST_HPP__

class Animal
{
public:
	void speak(void);
};

class Dog: protected Animal
{
public:
	using Animal::speak;
	void test(void);
};



#endif