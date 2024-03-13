#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for value in a sorted array
 *				 using jump search algorithm
 * @array: the array to search
 * @size: size of array
 * @value: value to search for
 * Return: -1 if value is not present or array is NULL,
 *			else index of where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step, jump;

	if (array == NULL || size < 1)
		return (-1);

	step = sqrt(size);
	i = 0;
	jump = step;

	while (array != NULL)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		while (array[i] <= value)
		{
			if (jump >= size)
				break;

			if (array[jump] >= value)
				break;
			i = jump;
			jump = i + step;

			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i, jump);

	for (; i <= jump && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
