#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		j = size;
		while ((j <= size) && j != 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
