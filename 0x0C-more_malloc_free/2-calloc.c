#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of array
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *array;
	char *ptr;

	if (!(nmemb) || !(size))
		return (NULL);

	array = malloc(nmemb * size);
	ptr = array;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (array);
}
