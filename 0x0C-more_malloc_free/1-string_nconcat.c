#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: The destination string
 * @s2: The string to concatenate
 * @n: Number of bytes to use
 * Return: The concatenated string, which is a pointer to newly
 * allocated memory on success, else return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j] != '\0')
	{
		j++;
		len++;
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		for (i = 0; i < n && s2[i] != '\0'; i++)
		{
			str[len + i] = s2[i];
		}
	}
	str[len + i] = '\0';

	return (str);
}
