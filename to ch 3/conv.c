#include <stdio.h>
int main(void){
	float result,amount;
	char input;
	printf("Enter the amount of Cups:__\b\b");
	scanf("%f",&amount);
printf("\nEnter\t \"p\",\"o\",\"t\",\"d\":to convert from Cups to \n \t Pints,Ounces,Tablespoon,Desertspoon respectively\n");
	scanf("%c",&input);


	switch (input){
	case 'p':
	result = amount / 2;
	printf("your cups = %fPint(s)",result);
	result = 0;
	break;
}
	//printf("your Cup(s) = %fPINT,%fOUNCE,%ftblspoon,%fteaspoon"),
	
	return 0;
}
