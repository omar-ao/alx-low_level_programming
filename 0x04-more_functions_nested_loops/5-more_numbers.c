#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, j, tmp;

	i = j = 0;
	while (i < 10)
	{
		while (j < 15)
		{
			tmp = j;
			if (j < 10)
				j = j * 10;
			_putchar((j / 10) + '0');

			if (tmp > 9)
				_putchar((j % 10) + '0');
			j = tmp;
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
