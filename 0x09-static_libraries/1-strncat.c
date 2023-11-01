#include "main.h"

/**
 * _strncat - the function of the code
 * @dest: destination string
 * @src: source of string
 * @n: number of string
 * Return: dest + n of src
 */

char *_strncat(char *dest, char *src, int n)
{
	int ldest, a;

	for (ldest = 0; dest[ldest] != '\0'; ldest++)
	{

	}
	for (a = 0; src[a] != 0 && a < n; a++)
	{
		dest[ldest + a] = src[a];
	}

	return (dest);
}
