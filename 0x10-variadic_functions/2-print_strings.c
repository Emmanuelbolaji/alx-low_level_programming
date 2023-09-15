#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...) {
    unsigned int a;
	va_list args;
    va_start(args, n);

    for (a = 0; a < n; a++) {
        int num = va_arg(args, int);
        _putchar("%d", num);

        if (separator != NULL && i < n - 1) {
            _putchar("%s", separator);
        }
    }

    va_end(args);
    _putchar("\n");
}
