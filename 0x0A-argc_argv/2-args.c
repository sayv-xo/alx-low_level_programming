#include <stdio.h>

/**
 * main - Prints arguments a program receives
 * @argc: Number of arguments
 * @argv: Value of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
