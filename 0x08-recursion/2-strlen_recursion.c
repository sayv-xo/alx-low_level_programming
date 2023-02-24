#include "main.h"

/**
 * _strlen_recursion - Find length of a string
 * @s: The string
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (i);
}
