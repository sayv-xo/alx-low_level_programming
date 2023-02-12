#include "main.h"
#include <string.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string to match
 * Return: Pointer to byte in s that matches one byte in accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *str;

	str = strpbrk(s, accept);
	return (str);
}
