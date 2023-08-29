#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: integer to e copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_dest = dest;
unsigned int a;
for (a = 0; a < n; a++)
{
*dest = *src;
dest++;
src++;
}
return (original_dest);
}
