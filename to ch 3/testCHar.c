#include <stdio.h>
#define PRAISE "Hey man, you're so awesome."
int main(void){
	char name[10];
	printf("Type your fuckin Name:___________\b\b\b\b\b\b\b\b\b\b\b");
	scanf("%s",name);
	printf("\nhey %s. \t %s \n",name,PRAISE);
	printf("the size of name is : %d \n",sizeof name);
	return 0;
}
