#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: character of strings
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
