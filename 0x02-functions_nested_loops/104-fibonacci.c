#include <stdio.h>

/**
 * main - Find and print the sum of even-valued Fibonacci terms, who values
 *	  do not exceed 4 million
 * Return: 0
 */

int main(void)
{
	int first, next, fib, sum;

	first = sum = fib = 0;
	next = 1;
	while (first < 4000000)
	{
		fib = first + next;
		first = next;
		next = fib;
		if (!(fib % 2))
			sum += fib;
	}
	printf("%d\n", sum);
	return (0);
}
