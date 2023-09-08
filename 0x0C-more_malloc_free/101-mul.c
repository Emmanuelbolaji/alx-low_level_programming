#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_in - function name
 * @input: arguement
 * Return: number
 */

int is_valid_in(const char *in)
{
while (*in)
{
if (!isdigit(*in))
{
return (0);
}
in++;
}
return (1);
}

/**
 * mul - function
 * Return: number
 */

int mul(int num1, int num2)
{
return (num1 * num2);
}

/**
 * main - function name
 * @argc: arguement
 * @argv: arguement
 * Return: 0 on success 98 on failure
 */

int main(int argc, char *argv[])
{
const char *num1_str = argv[1];
const char *num2_str = argv[2];
int num1 = atoi(num1_str);
int num2 = atoi(num2_str);
int result = mul(num1, num2);

if (argc != 3)
{
printf("Error\n");
return (98);
}
if (is_valid_in(num1_str) || !is_valid_in(num2_str))
{
printf("Error\n");
return (98);
}
printf("%d\n", result);
return (0);
}
