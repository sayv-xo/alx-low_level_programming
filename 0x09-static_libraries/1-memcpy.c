#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: Memory area to copy to
 * @src: Memory area to copy from
 * @n: Number of bytes to copy
 * Return: Pointer to memory copied to
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
