#include <stdio.h>
int main(void)
{	
	unsigned int un = 3000000000;
	short end = 300;
	long big = 65537;
	long long veryBig = 12345678908642;



	printf("\t \t \t ========================= \t \t \t \n");
	printf("\t \t \t un = %u and not %d \t \t \t \n",un,un);
	printf("\t \t \t short end = %hd and %d \t \t \t \n",end,end);
	printf("\t \t \t big = %ld and not %hd \t \t \t \n",big,big);
	printf("\t \t \t very big = %lld and not %ld \t \t \t \n",veryBig,veryBig);

	printf("\t \t \t ========================= \t \t \t \n");

	return 0;
	
}
