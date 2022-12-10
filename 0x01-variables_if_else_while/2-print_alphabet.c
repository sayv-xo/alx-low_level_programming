#include <stdio.h>

/**
 * main - prints alphabets in lowercase followed by newline
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
