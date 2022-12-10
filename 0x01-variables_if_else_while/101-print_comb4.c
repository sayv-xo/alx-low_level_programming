#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Description: numbers are separated by a comma followed by space
 * the three digits are different and only the smallest combination of
 * the digits are printed. The numbers are printed in ascending order
 * Return: Always 0 on success
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = 1; j < 9; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if (k > j && j > i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

