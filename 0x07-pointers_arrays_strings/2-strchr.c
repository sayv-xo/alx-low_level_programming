#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string
 * @c: Character to locate
 * Return: Pointer to the first occurence of character in string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
		if (*s == c)
			return (s);
	}
	return ('\0');
}
