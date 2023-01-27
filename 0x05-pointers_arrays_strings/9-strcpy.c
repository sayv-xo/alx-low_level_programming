#include "main.h"

/**
 * _strcpy - Copy string pointed to by src to buffer pointed to by dest
 * @dest: Buffer to copy string to
 * @src: Pointer to string
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len])
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[len] = '\0';
	return (dest);
}
