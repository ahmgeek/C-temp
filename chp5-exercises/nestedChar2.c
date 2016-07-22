#include <stdio.h>

int main(void)
{
  char ch = 'A'; 
  for(int rows = 0; rows < 6; rows++)
  {
    for(int columns = 0; columns  < (rows + 1) && ch <= 'U'; columns++,ch++)  
      printf("%c",ch);
    printf("\n");
  }
  return 0;

}
