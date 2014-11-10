#include <stdio.h>

int main(void){
  char ch = 'F';
  
  for(char rows = ch; rows >= 'A'; rows--)
  {
    for(char columns = ch; columns >= rows; columns--)
      printf("%c",columns);

    printf("\n");
  }
  

  return 0;





}

