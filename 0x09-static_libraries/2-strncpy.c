#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination string
 * @src: source string
 * @n: numer of string to copy
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}

	for (a = a; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);
}
