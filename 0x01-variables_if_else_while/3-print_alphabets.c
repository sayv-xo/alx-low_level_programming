#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Description: alphabets are printed in lowercase then in uppercase
 * Return: Always 0 on success
 */
int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}
