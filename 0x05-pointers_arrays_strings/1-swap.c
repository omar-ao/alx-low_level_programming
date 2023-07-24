#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: an int pointer
 * @b: an int pointer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
