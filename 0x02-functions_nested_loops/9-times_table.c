#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0
 */

void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (mul < 10)
			{
				if (j != 0 && (mul / 10) <= 0)
				{
					_putchar(' ');
				}
				_putchar((mul % 10) + '0');
			}
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
