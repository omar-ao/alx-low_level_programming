#include "main.h"

/**
 * reverse_array - Reverses array elements
 * @a: Array to be reversed
 * @n: Size of array
 */
void reverse_array(int *a, int n)
{
	int i, tmp, m;

	m = (n % 2 == 0) ? n / 2 : (n + 1) / 2;
	for (i = 0; i < m; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
