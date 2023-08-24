#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: 2nd string
 * Return: 0 when it is the same
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int b =  0;

	for (a = 0; s1[a] != '\0' && b == 0; a++)
	{
		b = s1[a] - s2[a];
	}

	return (b);
}
