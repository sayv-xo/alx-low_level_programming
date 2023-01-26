#include "variadic_functions.h"

/**
 * print_strings - Print strings followed by new line
 * @separator: String separator
 * @n: Number of arguments
 */

void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!(str))
			printf("nil");
		printf("%s", str);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
