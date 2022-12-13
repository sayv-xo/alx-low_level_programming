#include "main.h"

/**
 * jack_bauer - Prints every minutes of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2, stop;

	for (h1 = 0; h1 <= 2; h1++)
	{
		if (h1 == 2)
			stop = 3;
		else
			stop = 9;
		for (h2 = 0; h2 <= stop; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
