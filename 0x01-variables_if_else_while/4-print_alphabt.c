#include <stdio.h>

/**
 * main - print alphabets in lowercase except q and e
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
