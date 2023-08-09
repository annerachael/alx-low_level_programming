#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av) {
  if (ac == 0 || av == NULL) {
    return NULL;
  }

  int total_length = 0;
  for (int i = 0; i < ac; i++) {
    total_length += strlen(av[i]) + 1; // +1 for the \n
  }

  char *new_str = malloc(sizeof(char) * total_length);
  if (new_str == NULL) {
    return NULL;
  }

  int index = 0;
  for (int i = 0; i < ac; i++) {
    strcpy(new_str + index, av[i]);
    index += strlen(av[i]);
    new_str[index++] = '\n';
  }

  return new_str;
}
