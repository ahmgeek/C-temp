#include <stdio.h>
#define MIN_HRS 60
int convToHrs(int num);
int convToMin(int num);

int main(void)
{
	int min;
	int tH,tM;	   
	printf("Hey dude, please enter your fuckin time in minutes\n");	
	scanf("%d",&min);
	while(min > 0)
	{
	
	   tH = convToHrs(min);
	   tM = convToMin(min);
	   printf("Your time is %d hour(s) and %d minutes.\n",tH,tM);
	   tH = 0;
	   tM = 0;
	   printf("================================================\n");
	   printf("let's try again or (0) for exit \n");
       	   scanf("%d",&min);

	}
	return 0;
}

int convToHrs(int num)
{
	return num / MIN_HRS;
	
}
int convToMin(int num)
{
	return num % MIN_HRS;
}
