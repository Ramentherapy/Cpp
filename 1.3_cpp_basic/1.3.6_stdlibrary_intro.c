#include <stdio.h>
// #include <cstdio>  //only in g++ compiler or cpp file

#ifdef __cplusplus
#define USECPP 1
#else
#define USECPP 0
#endif

// namespace  //only in g++ compiler or cpp file
// {}

int main()
{
	// printf("%ld\n", __cplusplus); //only in g++ compiler or cpp file, __cplusplus is a long int number which represents g++ compiler version
	printf("USECPP = %d\n", USECPP);
	
	return 0;
}


// gcc 1.3.6_stdlibrary_intro.c
// output:
// USECPP = 0

// g++ 1.3.6_stdlibrary_intro.c
// output:
// USECPP = 1

// we can change the g++ compiler version by:
// g++ filename -std=c++11			(c++14, 17, 20)

// if we use cpp file, we can use gcc or g++ to compile it as a c++ program
// if we use c file, we can use g++ to compile it as a c++ program
