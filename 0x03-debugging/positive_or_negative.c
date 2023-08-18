#include "main.h"

/**
 * positive_or_negative - determine if number is positive or negative or 0
 * @i : is the number to checked
 * Return: 0 on success
 */

void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
