#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
	{
		if (!(i % 2))
			_putchar(str[i]);
	}
	_putchar('\n');
}
