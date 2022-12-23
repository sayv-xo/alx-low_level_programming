#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination
 * @src: String to append
 * Return: The string
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int i = 0;

	while (dest[i])
	{
		len_dest++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
