#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 14, 13, 20};
  char name[] = "Ahmad";
  char full_name[] = {
      'A', 'h', 'm', 'a', 'd',
      ' ', '.', ' ',
      'E', 'l', 'g', 'h', 'a', 'n', 'y', '\0'
  };

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of ints in areas (int[]): %ld\n", sizeof(areas));
  printf("The first area is: %d, the second is: %d\n", areas[0], areas[1]);
  printf("The size of char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n", sizeof(name));
  printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
  printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

  return 0;
}
