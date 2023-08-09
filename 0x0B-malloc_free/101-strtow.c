#include "main.h"
#include <stdlib.h>

char **strtow(char *str) {
  if (str == NULL || str[0] == '\0') {
    return NULL;
  }

  char **array = malloc(sizeof(char *) * (count_words(str) + 1));
  if (array == NULL) {
    return NULL;
  }

  int i = 0;
  char *token = strtok(str, " ");
  while (token != NULL) {
    array[i] = token;
    i++;
    token = strtok(NULL, " ");
  }

  array[i] = NULL;
  return array;
}

int count_words(char *str) {
  int count = 0;
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] == ' ') {
      count++;
    }
    i++;
  }

  return count + 1;
}
