#include <stdio.h>

const float IN = 0.39370;
const float FT = 0.032808;

int main(void)
{
  float height,inchHeight;
  int feetHeight;
  
  printf("Please enter your hight in \"Centimeters\":____\b\b\b\b");
  scanf("%f",&height);
  while(height > 0 ){
    feetHeight = height * FT;
    inchHeight = height * IN;
    printf("\n %1.2f cm = %d feet, %1.2f inches \n",height,feetHeight,inchHeight);
    feetHeight = 0;
    inchHeight = 0;
    printf("Enter a height in cm (<=0 to quit):____\b\b\b\b");
    scanf("%f",&height);
  }
  printf("\n Bye \n");
  return 0;
}
