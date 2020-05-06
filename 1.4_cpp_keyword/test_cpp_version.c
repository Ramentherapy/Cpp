#include <stdio.h>

#ifdef __cplusplus
#define USECPP 1
#else
#define USECPP 0
#endif

int main()
{
	printf("%ld\n", __cplusplus);
	
	return 0;
}