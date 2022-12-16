#include "main.h"

/**
 * print_times_table - Print the n times table starting with 0
 * If n is less than 0 or greater than 15, do not print anything
 * @n: The number
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (mul < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(mul + '0');
				}
				else if (mul >= 10 && mul < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + mul / 10);
					_putchar('0' + mul % 10);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + (mul / 10) / 10);
					_putchar('0' + (mul / 10) % 10);
					_putchar('0' + (mul % 100) % 10);
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
