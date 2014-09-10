#include <stdio.h>
#include <string.h>
int main(void)
{

	char fst[10],lst[10];
	int fstlen,lstlen;
	printf("Please Enter your first name:__________\b\b\b\b\b\b\b\b\b\b");
	scanf("%s",fst);
	printf("\nPlease Enter your last name:__________\b\b\b\b\b\b\b\b\b\b");
	scanf("%s",lst);
	printf("\n");
	printf("%s %s\n",fst,lst);
	fstlen = strlen(fst);	lstlen = strlen(lst); 
	printf("%*d %*d \n",fstlen,fstlen,lstlen,lstlen);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("%s %s\n",fst,lst);
	printf("%-*d %-*d \n",fstlen,fstlen,lstlen,lstlen);
	return 0;
}
