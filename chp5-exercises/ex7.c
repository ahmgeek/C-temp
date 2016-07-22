#include <stdio.h>

double cubeNums(double number);

int main(void)
{
  double number,result;

  printf("Please Enter the number to cube it\n");
  scanf("%lf",&number);
  result =  cubeNums(number);
  printf("the number %lf cubed = %lf\n",number,result);
  return 0;
}


double cubeNums(double number){
  return number * number * number;
}

