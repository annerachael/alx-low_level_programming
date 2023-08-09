#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2) {
  if (s1 == NULL) {
    s1 = "";
  }

  if (s2 == NULL) {
    s2 = "";
  }

  int length1 = strlen(s1);
  int length2 = strlen(s2);
  int total_length = length1 + length2 + 1; // +1 for the null terminator
  char *new_str = malloc(sizeof(char) * total_length);
  if (new_str == NULL) {
    return NULL;
  }

  strcpy(new_str, s1);
  strcat(new_str, s2);

  return new_str;
}

  return new_str;
}

