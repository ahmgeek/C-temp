#include <stdio.h>

const long double scnInYrs = 3.156E7;
int main(void){
	

	double age,result;
	printf("Please Enter your age:__\b\b");
	scanf("%lf",&age);
	result = age * scnInYrs;
	printf("Hey, your age =\t  %lf \n",result);
	return 0;
}
