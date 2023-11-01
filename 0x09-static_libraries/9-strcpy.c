#include "main.h"

/**
 * *_strcpy - pointer tyo character
 * @dest: string 1 pointer to character
 * @src: string 2 pointer to a character
 * Return: character dest
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';

	return (dest);
}
