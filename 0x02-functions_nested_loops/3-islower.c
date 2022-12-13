#include "main.h"

/**
 * _islower - Check whether a letter is lowercase
 * @c: Letter to be checked
 *
 * Return: 1 if letter is lowercase else return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
