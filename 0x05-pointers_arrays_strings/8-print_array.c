#include "main.h"

/**
 * print_array - prints n elements of array of integers
 * @a: pointer to the first element of the array
 * @n: number of array elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
