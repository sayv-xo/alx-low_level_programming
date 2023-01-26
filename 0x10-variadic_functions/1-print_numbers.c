#include "variadic_functions.h"

/**
 * print_numbers - Print numbers followed by new line
 * @separator: The number separator
 * @n: Number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ap);

	va_start(ap, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
