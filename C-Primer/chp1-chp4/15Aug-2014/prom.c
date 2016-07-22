#include <stdio.h>
int main(void)
{	
	char name[40];
	float height;
	printf("Please,Enter your name:________\b\b\b\b\b\b\b\b");
	scanf("%s",name);
	printf("\nand your height in inches is:____\b\b\b\b");
	scanf("%f",&height);
	printf("\n%s, you are %f feet tall \n",name,height/12);
	return 0;
}
