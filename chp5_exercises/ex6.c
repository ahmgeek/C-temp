/* addemup.c -- five kinds of statements */
#include <stdio.h>
int main(void)                
{
      int count, sum,period;
      count = 0;                
      sum = 0;
      printf("Please enter the period you want to calc your money in\n");
      scanf("%d",&period);
           while (count++ < period) {
             sum = sum +(count* count);
           }
           printf("your received = %d\n", sum);
           return 0;                 
}

