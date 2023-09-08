#include <stdio.h>
#include <stdlib.h>


/**
 * array_range -  function that creates an array of integers.
 * @min: arguement
 * @max: arguement
 * Return: result
 */

int *array_range(int min, int max)
{
	int *result = (int *)malloc(sizeof(int) * (max - min + 1));
	int a;
if (min > max)
{
return (NULL);
}
if (result == NULL)
{
return (NULL);
}
for (a = 0; a <= max - min; a++)
{
result[a] = min + a;
}
return (result);
}
