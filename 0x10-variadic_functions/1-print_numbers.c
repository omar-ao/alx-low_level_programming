#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String separator
 * @n: Number of integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(va);
	printf("\n");
}
