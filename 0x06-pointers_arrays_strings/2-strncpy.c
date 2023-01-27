#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes
 * Return: Pointer to the string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len = 0;

	while (src[len])
		len++;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
