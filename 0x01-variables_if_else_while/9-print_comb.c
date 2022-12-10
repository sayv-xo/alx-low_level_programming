#include <stdio.h>

/**
 * main - prints all possible combinations of single digits
 *
 * Description: Numbers are separated by , followed by a space
 * Numbers are printed in ascending order
 * Return: Always 0 on success
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
