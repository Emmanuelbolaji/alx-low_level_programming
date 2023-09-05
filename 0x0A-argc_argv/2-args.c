#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: arguements recieved
 * @argv: arguement vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
