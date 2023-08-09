#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 * Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *dup;
int i, len = 0;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
len++;

dup = malloc(sizeof(char) * (len + 1));

if (dup == NULL)
return (NULL);

for (i = 0; str[i]; i++)
dup[i] = str[i];

dup[len] = '\0';
return (dup);

}
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
