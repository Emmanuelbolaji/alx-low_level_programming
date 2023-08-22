#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 * Return: 0 on success
 */

int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	s = 0;
	while (s <= 2645)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	putchar(2772 - s);

	return (0);
}
