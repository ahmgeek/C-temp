/* post_pre.c -- postfix vs prefix */
#include <stdio.h>
int main(void)
{
	int q, a;
	a = 1;
	q = 2*a++;    	
	printf("q = %d,  a = %d \n", q,a);
        return 0;
}

