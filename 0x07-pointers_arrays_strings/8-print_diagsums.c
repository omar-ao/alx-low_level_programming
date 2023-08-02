#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagnals of
 * square matrix of integers
 * @a: Pointer to the matrix
 * @size: Size of the matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, primary = 0, secondary = 0;

	for (i = 0; i < size; i++)
	{
		primary += (a[i * size + i]);
		secondary += (a[i * size + size - i - 1]);
	}
	printf("%d, %d\n", primary, secondary);
}
