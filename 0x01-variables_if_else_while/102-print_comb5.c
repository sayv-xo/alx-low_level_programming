#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *
 * Description: Numbers range 0 - 99. The two numbers are separated by a space
 * All numbers are printed with two digits
 * The combinations are separaed by a comma followed by a space
 * Return: Always 0 on success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = 1; j <= 99; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98)
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
