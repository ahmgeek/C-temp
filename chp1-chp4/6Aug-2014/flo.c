#include <stdio.h>
int main(void){

	double num;

	printf("Enter a floating-point value: _\b");
	scanf("%lf",&num);
	printf("\nfixed-point notation: %2.6f \n ",num);
	printf("exponentioal notation: %e \n ",num);
	printf("p notation: %a \n ",num);
	return 0;
}
