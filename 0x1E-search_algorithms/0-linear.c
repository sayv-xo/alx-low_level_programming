#include "search_algos.h"

/**
 * linear_search - searches for values in an array using the
 *				   Linear search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements on the array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if value is
 *		   not present in array or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (*array)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		array++;
		i++;
		if (i == size)
			return (-1);
	}
	return (-1);
}
