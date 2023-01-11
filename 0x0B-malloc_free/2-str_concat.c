#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: The string concatenate to
 * @s2: The string to concatenate
 * Return: NULL on failure, else pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	for (i = 0; s2[i]; i++)
		len++;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++, j++)
		str[j] = s1[i];

	for (i = 0; s2[i]; i++, j++)
		str[j] = s2[i];

	return (str);
}
