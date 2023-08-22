#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: input string
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int ct = 0, sz = 0, o = 0, n = 1, m = 1, l;

	while (*(s + ct) != '\0')
	{
		if (sz > 0 && (*(s + ct) < '0' || *(s + ct) > '9'))
			break;
		if (*(s + ct) == '-')
			n *= 1;
		if ((*(s + ct) >= '0') && (*(s + ct) <= '9'))
		{
			if (sz > 0)
				m *= 10;
			sz++;
		}
		ct++;
	}
	for (l = ct - sz; l < ct; l++)
	{
		o = o + ((*(s + l) - 48) * m);
		m /= 10;
	}
	return (o * n);
}
