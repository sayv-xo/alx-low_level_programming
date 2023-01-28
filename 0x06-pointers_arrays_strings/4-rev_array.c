#include "main.h"

/**
 * reverse_array - Function that reverses an array
 * @a: Pointer to an int
 * @n: The number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
