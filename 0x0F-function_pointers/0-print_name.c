#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: arguement
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_name_def - prints name
 * @name: arguement
 */

void print_name_def(char *name)
{
	printf("Name: %s\n", name);
}
