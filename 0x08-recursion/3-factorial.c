#include "main.h"

/**
 * factorial - Find factorial of a given positive number
 * @n: The number
 * Return: The factorial or -1 if n is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n -1));
}
