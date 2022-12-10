#include <stdio.h>

/**
 * main - prints single digit numbers of base 10 from 0
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
