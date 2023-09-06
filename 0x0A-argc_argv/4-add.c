#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of arguements
 * @argv: arguement vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int a;
int b;
int total = 0;
int num;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (a = 1; a < argc; a++)
{
char *arg = argv[a];
int is_digit = 1;
for (b = 0; arg[b] != '\0'; b++)
{
if (!isdigit(arg[b]))
{
is_digit = 0;
break;
}
}
if (!is_digit)
{
printf("Error\n");
return (1);
}
if (num >= 0)
num = atoi(arg);
{
total += num;
}
}
printf("%d\n", total);

return (0);
}
