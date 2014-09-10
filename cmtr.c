#include <stdio.h>
#define cmr 2.54;
int main(void){


	float hight,result;
	printf("Please Enter your hight:___\b\b\b");
	scanf("%f",&hight);
	result = hight * cmr;
	printf("\nyour hight in cm is :%fCM  \n",result);
	return 0;
}
