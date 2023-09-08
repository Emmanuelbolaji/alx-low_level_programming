#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: result on success null on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	 size_t s2_len = strlen(s2);
	 size_t result_len = strlen(s1) + n;
	 char *result = (char *)malloc(result_len + 1);

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

if (n >= s2_len)
{
n = s2_len;
}
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strncpy(result + strlen(s1), s2, n);
result[result_len] = '\0';
return (result);
}
