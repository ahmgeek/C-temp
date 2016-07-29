#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
  struct Person *who = malloc(sizeof(struct Person));
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
}

void Person_destroy(struct Person *who)
{
  assert(who != NULL);

  free(who->name);
  free(who);
}

void Person_print(struct Person *who)
{
  printf("\tName: %s\n", who->name);
  printf("\tAge: %d\n", who->age);
  printf("\tHeight: %d\n", who->height);
  printf("\tWeight: %d\n", who->weight);
  printf("--------------------------\n");
}

int main(int argc, char *argv[])
{
  // Make two people structures.
  struct Person *ahmad = Person_create("A .Elghany", 25, 170, 97);
  struct Person *islam = Person_create("Islam Taha", 21, 180, 115);

  printf("Ahmad is at memory location %p\n", ahmad);
  Person_print(ahmad);


  printf("Islam is at memory location %p\n", islam);
  Person_print(islam);

  // make everyone age 20 years then print them.
  ahmad->age += 20;
  ahmad->height -= 2;
  ahmad->weight += 10;
  Person_print(ahmad);

  islam->age += 20;
  islam->weight -= 30;
  Person_print(islam);

  Person_destroy(ahmad);
  Person_destroy(islam);

  return 0;
}
