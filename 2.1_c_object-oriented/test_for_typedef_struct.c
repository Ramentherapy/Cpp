#include <stdio.h>

typedef struct teacher
{
	int a;
	int b;
	
}aaateacher, *pteacher;


int main()
{
	struct teacher s1;
	s1.a = 25;
	
	pteacher p1 = &s1;
	printf("p1->a = %d\n", p1->a);
	
	struct teacher* p2 = &s1;
	printf("p2->a = %d\n", p2->a);
	
	aaateacher* p3 = &s1;
	printf("p3->a = %d\n", p3->a);
	
	return 0;
}

// output:

// p1->a = 25
// p2->a = 25
// p3->a = 25
