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
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	if (s[i] == '\0')
		_putchar('\n');
}
