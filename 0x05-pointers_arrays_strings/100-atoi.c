#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int i, sign = 1;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
			sign *= -1;
		if (isdigit(s[i]))
		{
			num = 10 * num + (s[i] - '0');
			if (isspace(s[i + 1]))
				break;
		}
	}

	return (sign * num);
}
