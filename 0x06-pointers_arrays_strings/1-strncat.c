#include "main.h"

/**
 * _strncat - Concatenate two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes
 * Return: The concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0, j = 0;

	while (dest[j] != '\0')
	{
		j++;
		len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
