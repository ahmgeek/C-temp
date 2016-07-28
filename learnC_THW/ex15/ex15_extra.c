#include <stdio.h>

int main(int argc, char *argv[])
{
  // Creating two arrays.
  int ages[] = {23, 34, 12, 98, 2};
  char *names[] = {
    "Alan", "Frank",
    "Medo", "John", "Lisa"
  };

  // Setup the pointers to the start of the array.
  int *cur_age = ages;
  char **cur_name = names;

  //Get sizes of ages.
  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  // Redo using pointers 
  for(i = 0; i < count; i++){
    printf("%s has %d years alive.\n", *(cur_name + i),  *(cur_age + i));
  }

  printf("---\n");

  // Seconde way using pointers.
  for (i = 0; i < count; i++){
    printf("%s is %d years old.\n", *(cur_name + i), *(cur_age+i));
  }

  printf("---\n");

  // Third way, pointers are just arrays.
  for (i = 0; i < count; i++){
    printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
  }

  printf("---\n");


  // fourth way with pointers in a stupid complex way
  for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++)
  {
    printf("%s lived %d years so far.\n", *cur_name, *cur_age);
  }

  return 0;
}
