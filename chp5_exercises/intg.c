#include <stdio.h>
int main(void){

	int num,count;
	count =0;
	printf("Please enter a fuckin number that will be raised by 10:__\b\b");
	scanf("%d",&num);
	
	printf("%d\n",num);
	while(count++ < 10){	
	printf("%d \n",++num);
	 }
	
	return 0;
} 
