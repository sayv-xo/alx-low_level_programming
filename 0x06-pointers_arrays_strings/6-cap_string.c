#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string
 * Return: The capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[0] <= 'z' && s[0] >= 'a')
	{
		s[0] -= 32;
		i++;
	}
	while (s[i])
	{
		if (s[i] == ' ' ||
		s[i] == '\t' ||
		s[i] == '\n' ||
		s[i] == ',' ||
		s[i] == ';' ||
		s[i] == '.' ||
		s[i] == '!' ||
		s[i] == '?' ||
		s[i] == '"' ||
		s[i] == '(' ||
		s[i] == ')' ||
		s[i] == '{' ||
		s[i] == '}')
		{
			if (s[i + 1] <= 'z' && s[i + 1] >= 'a')
				s[i + 1] -= 32;
		}
		i++;
	}

	return (s);
}
