#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int length, l;
	char rov;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (l = 0; l < length / 2; l++)
	{
		rov = s[l];
		s[l] = s[length - l - 1];
		s[length - l - 1] = rov;
	}
}
