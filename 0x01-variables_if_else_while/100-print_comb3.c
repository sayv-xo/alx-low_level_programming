#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *
 * Description: the numbers are seperated by comma followed by space
 * The two numbers are different and only the smallest combination of
 * two digits are printed. The numbers are printed in ascending order
 * Return: Always 0 on success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != j && i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
