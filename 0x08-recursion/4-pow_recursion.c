#include "main.h"

/**
 * _pow_recursion - Return value of x raised to power y
 * @x: The number
 * @y: The exponent
 * Return: x exponent y or -1 if the exponent is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
