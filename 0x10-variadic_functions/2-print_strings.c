#include "variadic_functions.h"
/**
 * print_strings - Prints strings, followed by a newline
 * @separator: Pointer to string separator
 * @n: Number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;
	char *vp;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		vp = va_arg(va, char *);
		if (vp)
			printf("%s", vp);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(va);
}
