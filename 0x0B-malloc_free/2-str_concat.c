#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure, return pointer
 */

char *str_concat(char *s1, char *s2)
{
	size_t lengths1 = strlen(s1);
	size_t lengths2 = strlen(s2);
	size_t totalength = lengths1 + lengths2;

	char *concancate = (char *)malloc(totalength + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (concancate == NULL)
	{
		return (NULL);
	}
	strcpy(concancate, s1);
	strcat(concancate, s2);

	return (concancate);
}
