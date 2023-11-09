#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguements
 * Return: addition of arguements
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0;
	va_list tray;

	va_start(tray, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		add += va_arg(tray, int);
	}

	va_end(tray);

	return (add);
}
