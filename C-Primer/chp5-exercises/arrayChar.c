#include  <stdio.h>

#define SIZE 26

int main(void)
{
  char arr[SIZE];
  int index;
    
  for(index = 0; index < SIZE; index++)
    arr[index] = 'a' + index;

    for(index = 0; index < SIZE; index++)
      printf(" %c",arr[index]);
  printf("\n");
  return 0;
}
