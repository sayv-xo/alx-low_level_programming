#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimum number
 * @max: Maximum number
 * Return: Pointer to the array
 */

int *array_range(int min, int max)
{
	int i, size, *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
		arr[i] = min;

	return (arr);
}
