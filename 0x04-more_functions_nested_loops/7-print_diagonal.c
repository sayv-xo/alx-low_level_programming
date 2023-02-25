#include "main.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: The number of lines to draw
 */

void print_diagonal(int n)
{
	int i, stop = 1;

	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		for (i = 0; i < stop; i++)
		{
			if (n != 1)
				_putchar(' ');
		}
		stop++;
		n--;
	}
}
