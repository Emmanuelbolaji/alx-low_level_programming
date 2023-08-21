#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string input
 * Return: void
 */

void puts_half(char *str)
{
int ren = 0;
int alf, l;

while (str[ren] != '\0')
{
ren++;
}

alf = (ren - 1) / 2;
for (l = (alf + 1); l < ren; l++)
{
_putchar(str[l]);
}

_putchar('\n');
}
