#include <stdio.h>

int main(void)
{
  char ch = 'A'; 
  for(int rows = 0; rows < 6; rows++)
  {
    for(char columns = rows; columns  <= (rows+1) && ch <= 'U'; columns++,ch++)  
      printf("%c",ch);
    printf("\n");
  }
  return 0;

}
