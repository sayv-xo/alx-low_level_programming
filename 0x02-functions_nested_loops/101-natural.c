#include <stdio.h>

/**
 * main - Prints sum of all multiples of 3 and 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int n, counter;

	counter = 0;
	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			counter += n;
		}
	}
	printf("%d\n", counter);
	return (0);
}
