#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
		len++;
	while (str[i] != '\0')
	{
		if (!(i % 2))
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
