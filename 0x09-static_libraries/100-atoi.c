#include "main.h"

/**
 * _atoi - Convert string to integer
 * @s: The string to convert
 * Return: The converted integer
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int i = 0, sign = 1;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] <= '9' && s[i] >= '0')
		{
			num = (num * 10 + s[i] - '0');
			if (s[i + 1] <= '9' && s[i + 1] >= '0')
				;
			else
				return (num * sign);
		}
		i++;
	}
	return (num * sign);
}
