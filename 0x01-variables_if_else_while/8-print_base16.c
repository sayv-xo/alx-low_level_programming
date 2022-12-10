#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
