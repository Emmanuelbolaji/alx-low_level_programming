#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: The characters to be checked
 * Return: 1 for lowercase characters or 0 if otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
