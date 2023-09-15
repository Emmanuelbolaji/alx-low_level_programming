#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: arguement
 * @n: arguement
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	const char *str;
	va_list args;

	va_start(args, n);
	str = va_arg(args, const char *);

	for (a = 0; a < n; a++)
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

	if (a < n - 1)
	{
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
