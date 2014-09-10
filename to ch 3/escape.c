#include <stdio.h>
int main()
{
	
	float salary;
	
	printf("\aEnter your desired mlntohly salary:");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is a $%.2f a year.",salary,salary*12.0); 
	printf("\rGee!\n");

	return 0;
}
