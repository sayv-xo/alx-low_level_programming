#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int i, len = 0;
	char tmp;

	while (s[len])
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[len - 1 - i];
		s[len - 1 - i] = s[i];
		s[i] = tmp;
	}
}
