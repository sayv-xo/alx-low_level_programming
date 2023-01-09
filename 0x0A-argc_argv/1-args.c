#include <stdio.h>

/**
 * main - Prints number of arguments passed to a program
 * @argv: Name of arguments
 * @argc: Number of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	for (i = 0; i < argc; i++)
		;
	printf("%d\n", i - 1);
	return (0);
}
