#include <stdio.h>
const float molcMass = 3.0E-23;
const float wtrQrt = 950;
int main(void){
	float qrtNum,qrtRes,fnlRes;

	printf("Please Enter the amount of water in Quarts :___\b\b\b");
	scanf("%f",&qrtNum);
	qrtRes = qrtNum * wtrQrt;
	fnlRes = qrtRes /  molcMass;
	printf("\nYour number of water in molecules is : %f \n",fnlRes);

	return 0;
}
