#include "main.h"

/**
 * _memset - Fills the first n bytes of memory area pointed to by
 *	     s with constant byte b
 * @s: Pointer to memory
 * @b: Constant byte
 * @n: The number of byte
 * Return: Pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
