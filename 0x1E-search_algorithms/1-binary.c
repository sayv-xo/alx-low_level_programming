#include "search_algos.h"

void print_array(int *array, size_t start, size_t stop);

/**
 * binary_search - search for value in a sorted array
 *				   using the Binary Search algorithm
 * @array: poitner to the first element of array to search
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where the value is located else
 *		   -1 if value is not present n array or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	left = 0;
	right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left != right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] < value)
		{
			left = mid + 1;
		}

		else if (array[mid] > value)
		{
			right = mid - 1;
		}

		else
			return (mid);
	}

	return (-1);
}

/**
 * print_array - prints the sub array being searched
 * @array: the array
 * @start: left value
 * @stop: right value
 */
void print_array(int *array, size_t start, size_t stop)
{
	size_t i = start;

	printf("Searching in array: ");
	for (; i <= stop; i++)
	{
		printf("%d", array[i]);
		if (i != stop)
			printf(", ");
	}
	printf("\n");
}
