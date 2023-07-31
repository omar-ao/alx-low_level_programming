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
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
		(*a)++;
	}
	printf("\n");
}
