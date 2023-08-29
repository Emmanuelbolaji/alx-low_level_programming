#include "main.h"
#include <stddef.h>

/**
 * *_strchr - function that locates a character in a string
 * @s: function arguement
 * @c: function arguement
 * Return: Returns a pointer to the 1st char c in the string s or NULL
 */


char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

if (c == '\0')
{
return (s);
}

return (NULL);
}
