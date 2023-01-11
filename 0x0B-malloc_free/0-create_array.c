#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters and initializes it with
 * a specific character
 * @size: The size of the array
 * @c: The character to initialize with
 * Return: NULL if size is 0 or if it fails, else return pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (!(size))
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
