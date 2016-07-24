#include <stdio.h>

int main(int argc, char *argv[])
{
  int numbers[4] = { 0 };
  char name[4] = { 'a' };

  // Printing them out.
  printf("numbers: %d %d %d %d\n",
      numbers[0], numbers[1],
      numbers[2], numbers[3]);

  printf("name each: %c %c %c %c\n",
      name[0], name[1],
      name[2], name[3]);

  printf("name: %s\n", name);

  // Setup the numbers.
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  // Setup the name.
  name[0] = 'M';
  name[1] = 'o';
  name[2] = 'e';
  name[3] = '\0';

  // Printing them initialized.
  printf("numbers: %d %d %d %d\n",
      numbers[0], numbers[1],
      numbers[2], numbers[3]);

  printf("name each: %c %c %c %c\n",
      name[0], name[1],
      name[2], name[3]);

  printf("name: %s\n", name);

  // Another use for name.
  char *another_name = "Ahmad";
  printf("another Name: %s\n", another_name);

  printf("another name each: %c %c %c %c %c %c\n",
      another_name[0], another_name[1],
      another_name[2], another_name[3],
      another_name[4], another_name[5]);

  return 0;
}
