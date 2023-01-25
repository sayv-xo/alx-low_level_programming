#include "variadic_functions.h"

/**
 * sum_them_all - Sum parameters
 * @n: The numbers to add
 * Return: Sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list ap;
	va_start(ap, n);

	if (!(n))
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
