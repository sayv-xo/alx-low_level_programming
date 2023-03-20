#include "main.h"
#include <string.h>

/**
 * _strspn - get length of a prefix substring
 * @s: The string
 * @accept: The substring
 * Return:  the number of bytes in the initial segment of s
 *	    which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = strspn(s, accept);
	return (i);
}
