#include "main.h"

/**
 * rev_string - reverses string
 * @s: string
 */
void rev_string(char *s)
{
	int i, len;
	char *first, *last, tmp;

	first = last = s;

	len = strlen(s); /* the length of the string */
	last += (len - 1); /* last address of the string characters */

	for (i = 0; i < len / 2; i++)
	{
		tmp = *first;
		*first = *last;
		*last = tmp;

		first++;
		last--;
	}
}
