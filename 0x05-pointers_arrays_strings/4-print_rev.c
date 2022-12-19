#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
