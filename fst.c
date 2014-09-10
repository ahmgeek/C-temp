#include <stdio.h>
#include <string.h>

int main(void){
	
	char name[40];
	printf("Please Enter your first Name:_________\b\b\b\b\b\b\b\b\b");
	scanf("%s",name);
	printf("\n your name is \"%s\".\n",name);
	printf(" your name in 20 width field is:\"%20s\".\n",name);
	printf(" your name in 20 width field is:\"%-20s\".\n",name);
	printf(" your name in more 3 char wider is:\"%-*s\".\n",strlen(name)+3,name);
	
	


	return 0;
}
