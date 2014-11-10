#include <stdio.h>

int main(void)
{
  char ch = 'A'; 
  for(int rows = 1; rows < 6; rows++)
  {
    int formula =(rows * (rows+ 1) / 2);
    for(char columns = rows; columns  <= formula && ch <= 'U'; columns++,ch++)  
      printf("%c",ch);
    printf("\n");
  }
  return 0;

}
