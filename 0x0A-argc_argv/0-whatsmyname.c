#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: number of arguements
 * @argv: arguements vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("%s\n", argv[0]);
}
return (0);
}
