#include "main.h"

/**
 * print_line - Draws a straight line to the terminal
 * @n: The number of lines to draw
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
		_putchar('\n');
}
