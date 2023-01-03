#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: The array
 * @n: The number of elements of array to print
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		printf("%d", a[i]);
		i++;
		if (i != n)
			printf(", ");
	}
	putchar('\n');
}
