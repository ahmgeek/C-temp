#include <stdio.h>
int main(void){
  int divisor,divident,result;
  printf("This program compute moduli.\n");
  printf("Enter a number to serve as a \"Divisor\":");
  scanf("%d",&divisor);
  printf("\nNow enter the \"Dividend\":");
  scanf("%d",&divident);
  while(divident >= 0){
    result = divident % divisor;
    printf("\n %d \%  %d is %d \n",divident,divisor,result);
    result = 0;
    divident = 0;
    printf("Enter another divident(<= 0 to Exit):");
    scanf("%d",&divident);
  }
  printf("\nDone");
  return 0;
}
