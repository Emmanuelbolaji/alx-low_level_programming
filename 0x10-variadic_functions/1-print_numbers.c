#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...) {
int num;
unsigned int a;
va_list args;
va_start(args, n);
num = va_arg(args, int);

for (a = 0; a < n; a++)
{
printf("%d", num);

if (a < n - 1)
{
if (separator != NULL)
{
printf("%s", separator);
}
}
}

va_end(args);
printf("\n");
}
