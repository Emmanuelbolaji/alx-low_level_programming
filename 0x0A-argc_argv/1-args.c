#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of arguement inputed
 * @argv: arguement vector
 * Return: 0 on success
 */

int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
