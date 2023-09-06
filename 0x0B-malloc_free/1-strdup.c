#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Write a function that returns a pointer
 * @str: arguements
 * Return: duplicate
 */

char *_strdup(char *str)
{
size_t len = strlen(str);
size_t b = 0;
char *duplicate = (char *)malloc((len + 1) * sizeof(char));

if (str == NULL)
{
return (NULL);
}
if (duplicate == NULL)
{
return (NULL);
}
while (str[b] != '\0')
{
duplicate[b] = str[b];
b++;
}
duplicate[b] = '\0';
return (duplicate);
}
