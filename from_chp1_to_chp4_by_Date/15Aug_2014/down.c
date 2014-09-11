#include <stdio.h>
int main(void)
{
	float dwnspd,flsiz,dwntm;
	
	printf("Please Enter your download speed in(Mbs)\n");
	scanf("%f",&dwnspd);
	printf("Please Enter the file size in(MB)\n");
	scanf("%f",&flsiz);
	dwntm = flsiz / dwnspd * 8;
	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f secondes.\n",dwnspd,flsiz,dwntm);
	return 0;
}
