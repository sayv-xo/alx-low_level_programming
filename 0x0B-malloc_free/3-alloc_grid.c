#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Return pointer to 2 dimensional array of integers
 * @width: The width of array
 * @height: The height of array
 * Return: NULL on failure or if height or width is 0 or negative
 * else return pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
