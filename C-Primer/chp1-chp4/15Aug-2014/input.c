// input.c -- when to use &
#include <stdio.h>
int main(void)
{

	printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
	printf("The double type is %zd bytes..\n", sizeof (double));  
	return 0;



/*
unsigned width, precision;
int number = 256;
double weight = 242.5;
printf("Enter a field width:\n");
scanf("%d", &width);
printf("The number is :%*d:\n", width, number);
printf("Now enter a width and a precision:\n");
scanf("%d %d", &width, &precision);
printf("Weight = %*.*f\n", width, precision, weight);
printf("Done!\n");*/
	
}

