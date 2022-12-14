#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all naturals numbers from n to 98
 * @n: The first number to be printed
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d\n", 98);
}
