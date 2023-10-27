#include <stdio.h>

/**
 * main - program prints number of arguments passed into it
 * @argc: number of arguement
 * @argv: vector of arguement
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
