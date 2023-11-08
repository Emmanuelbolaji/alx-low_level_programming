#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: name of the function
 * @f: pointer to he function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
