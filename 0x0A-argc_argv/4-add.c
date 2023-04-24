#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int digit(char *arg);
/**
 * main - Adds positive numbers
 * @argc: Number of arguments
 * @argv: Value of argument
 * Return: 0 on success, else 1
 */

int main(int argc, char **argv)
{
	int i, num;
	long int sum = 0;

	if (argc == 1)
	{
		sum = 0;
	}
	else
		for (i = 1; i < argc; i++)
		{
			if (digit(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				num = atoi(argv[i]);
				sum += num;
			}
		}
	printf("%ld\n", sum);
	return (0);
}

/**
 * digit - Check if a string is number
 * @arg: The string to check
 * Return: A number greater than 0 or 0 if it is not a number
 */

int digit(char *arg)
{
	int i = 1;

	while (*arg != '\0')
	{
		if (*arg >= '0' && *arg <= '9')
			i++;
		else
		{
			i = 0;
			return (i);
		}
		arg++;
	}
	return (i);
}
