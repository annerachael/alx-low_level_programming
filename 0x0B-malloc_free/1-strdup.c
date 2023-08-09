#include "main.h"
#include <stdlib.h>

char *_strdup(char *str) {
  if (str == NULL) {
    return NULL;
  }

  int length = strlen(str) + 1;
  char *new_str = malloc(sizeof(char) * length);
  if (new_str == NULL) {
    return NULL;
  }

  strcpy(new_str, str);
