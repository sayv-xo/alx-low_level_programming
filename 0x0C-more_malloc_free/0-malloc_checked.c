#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates a memory using malloc
 * @b: The size of memory to allocate
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(sizeof(b));

	if (mem == NULL)
		exit(98);

	return (mem);
}
