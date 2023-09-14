#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: integer
 * Return: 0 if n is eual to 0
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int a = 0;
int add = 0;
va_list args;
va_start(args, n);

if (n == 0)
return (0);

for (a = 0; a < n; a++)
{
int arg = va_arg(args, int);
add += arg;
}
va_end(args);
return (add);
}
