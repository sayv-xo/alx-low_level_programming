#include <stdio.h>

/**
 * main - Print the first 50 Finobacci numbers
 * Return: 0;
 */

int main(void)
{
	long int a, b, num;
	int i;

	a = 0;
	b = 1;

	for (i = 1; i <= 50; i++)
	{
		num = a + b;
		printf("%ld", num);
		a = b;
		b = num;
		if (i != 50)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
