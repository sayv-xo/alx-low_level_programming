#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 separated by space, followed by new line
 * For multiples of three, print Fizz instead
 * For multiples of five, print Buzz
 * For multiples of fifteen, print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
