#include "main.h"

/**
 * main - program that prints _putchar followed by new line
 *
 * Return: 0
 */

int main(void)
{
	char c[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i = 0;

	while (c[i])
	{
		_putchar(c[i]);
		i++;
	}
	return (0);
}
