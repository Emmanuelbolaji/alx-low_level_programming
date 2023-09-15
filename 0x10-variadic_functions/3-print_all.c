#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: arguement
 */

void print_all(const char *format, ...)
{
	va_list args;
	int integer = va_arg(args, int);
	int character = va_arg(args, int);
	double floating_point = va_arg(args, double);
	char *str = va_arg(args, char *);
	char *separator = "";

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == 'c')
		{
			printf("%s%c", separator, character);
		}
		else if (*format == 'i')
		{
			printf("%s%d", separator, integer);
		}
		else if (*format == 'f')
		{
			printf("%s%f", separator, floating_point);
		}
		else if (*format == 's')
		{
			if (str == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, str);
			}
		}
		separator = ", ";
		format++;
	}
	va_end(args);
	printf("\n");
}
