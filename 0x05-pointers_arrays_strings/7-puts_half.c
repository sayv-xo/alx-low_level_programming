#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: The string
 */

void puts_half(char *str)
{
	int n, len = 0;

	while (str[len])
		len++;

	if (len % 2)
		len++;

	n = len / 2;

	for (n = n; str[n]; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
