#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: The string to encode
 * Return: The encoded string
 */

char *leet(char *s)
{
	int i = 0, j;

	char letter[] = {'a', 'e', 'o', 't', 'l'};
	char code[] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letter[j] || s[i] == letter[j] - 32)
				s[i] = code[j];
		}
		i++;
	}

	return (s);
}
