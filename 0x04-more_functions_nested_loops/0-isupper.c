#include "main.h"

/**
 * _isupper - Checks for uppercase letter
 * @c: The character to be checked
 *Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
