#include "main.h"

/**
 * *_strcat - character function
 * @dest: destination of string
 * @src: source of string
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int l1, l2, a;

	for (l1 = 0; dest[l1] != '\0'; l1++)
	{

	}
	for (l2 = 0; src[l2] != '\0'; l2++)
	{

	}
	for (a = 0;  a <= l2; a++)
	{
		dest[l1 + a] = src[a];
	}
	return (dest);
}
