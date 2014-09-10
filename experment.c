#include <stdio.h>

int main(void)
{	
	float x = 1e-30;
	x /= 1e20;
	printf(" x = : %e \n",x);
	return 0;

}
