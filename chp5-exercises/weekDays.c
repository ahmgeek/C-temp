#include <stdio.h>
const int DYS_N_WEEK = 7;
int main(void){

	int dysNum,weeks,dys;
	printf("Please enter days to compute them\n");
	scanf("%d",&dysNum);
	while(dysNum > 0){
		weeks = dysNum / DYS_N_WEEK;
		dys = dysNum % DYS_N_WEEK;
		printf("%d days are %d weeks , %d days.\n",dysNum,weeks,dys);
		printf("Try again or (0) for exit\n");
		dysNum = 0;
		weeks = 0;
		dys = 0;
		scanf("%d",&dysNum);
			
	}
	return 0;
}
	
