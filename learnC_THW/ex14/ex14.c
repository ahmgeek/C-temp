#include <stdio.h>
#include <ctype.h>
#include <string.h>


void print_letters(char arg[]);

void print_arguments(int argc, char **argv)
{
  int i = 1;

  for(;i < argc; i++){
    print_letters(argv[i]);
  }
}

void print_letters( char arg[])
{
  int i = 0;
  for(i = 0; arg[i]; i++){
    char ch = arg[i];

    // Minimize the functions
    if(isalpha(ch) || isblank(ch)){
      printf("'%c' == %d ", ch, ch);
    }
  }
  printf("\n");
}


int main(int argc, char **argv)
{
  print_arguments(argc, argv);

  return 0;
}
