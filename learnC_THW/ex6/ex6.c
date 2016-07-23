#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.2343;
  char initial = 'A';
  char first_name[] = "Ahmad";
  char last_name[] = "Abd-Elghany";

  printf("You're a %d KM away \n", distance);
  printf("You've a %f of Power remaining \n", power);
  printf("You've %f of doupled power \n", super_power);
  printf("My initial Name is %c \n", initial);
  printf("My first name is: %s \n", first_name);
  printf("and last name is: %s \n", last_name);
  printf("My whole name is: %s %c, %s \n", first_name, initial, last_name);

  return 0;
}
