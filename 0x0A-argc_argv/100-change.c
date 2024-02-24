#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to make change
 *		  for an amount of money
 * @argc: number of cmd line arguments passed
 * @argv: array of arguments passed
 * Return: 1 if number of arguments passed is not exactly one
 */
int main(int argc, char *argv[])
{
	int amt, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amt = atoi(argv[1]);
	while (amt > 0)
	{
		if (amt >= 25)
		{
			coins += (amt / 25);
			amt %= 25;
		}
		if (amt >= 10)
		{
			coins += (amt / 10);
			amt %= 10;
		}
		if (amt >= 5)
		{
			coins += (amt / 5);
			amt %= 5;
		}
		if (amt >= 2)
		{
			coins += (amt / 2);
			amt %= 2;
		}
		else
		{
			amt %= 1;
			coins++;
		}
	}
	printf("%d\n", coins);

	return (0);
}
