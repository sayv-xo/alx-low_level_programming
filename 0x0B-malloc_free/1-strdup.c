#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Return pointer to newly allocated space in memory
 * which contains a copy of string given as parameter
 * @str: The string to be copied
 * Return: NULL if string is NULL or insufficient memory, else pointer to
 * duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len;

	len = 0;
	i = 0;

	if (str == NULL)
		return (NULL);


	while (str)
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';

	return (dup);
}
