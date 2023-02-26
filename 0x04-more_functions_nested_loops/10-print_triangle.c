#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			_putchar(32);
		}
		for (j = 0; j <= i; j++)
			_putchar(35);
		_putchar(10);
	}
}

