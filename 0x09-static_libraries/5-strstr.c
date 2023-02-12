#include "main.h"
#include <string.h>

/**
 * _strstr - Locate a substring
 * @haystack: The string
 * @needle: The substring
 * Return: Pointer to beginning of first occurence of substring
 *	   or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *s;

	s = strstr(haystack, needle);
	return (s);
}
