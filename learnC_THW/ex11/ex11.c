#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 1;
  while(i < argc){
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  // let's make our own array of strings
  char *states[] = {
      "California", "Oregon",
      "Washington", "Texas"
  };

  char **states_ptr = states;

  i = 0;
  int num_states = 4;
  while(i < num_states) {
      printf("state %d: %s\n", i, states_ptr[i]);
      i++;
  }

  // Test: make states get its values from argv
  i = 1;
  while(i < argc){
    if(argc >= 1 && argc < 6){
      states[i] = argv[i];
      printf("states assignation: %s\n", *states_ptr++);
    }
    i++;
  }

  return 0;
}
