#include <stdio.h>


int main(void){
  char ch = '$';
  for(int rows = 0; rows < 5; rows++){
    for(int column = 1  + rows; column > 0;column--)
      printf("%c",ch);
    
    printf("\n");

  }

  return 0;
}
