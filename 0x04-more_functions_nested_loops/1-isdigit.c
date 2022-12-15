#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The character to be checked
 * Return: 1 if c is digit otherwise 0
 */

int _isdigit(int c)
{
	if (!(c <= 59 && c >= 48))
		return (0);
	return (1);
}
