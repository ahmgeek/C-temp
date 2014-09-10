


#include <stdio.h>
int main(void)
{
int ten = 10;
int two = 2;
printf("Doing it right: ");
printf("%d minus %d is %d\n", ten, 2, ten - two );
printf("Doing it wrong: ");
printf("%d minus %d is %d\n", ten ); // forgot 2 arguments
printf("=======================================================\n");
int num = 0x10;
int octNum =020;
printf("Number is : %d\n",num);
printf("but Octal num will be : %d \n",octNum);

return 0;
} 
