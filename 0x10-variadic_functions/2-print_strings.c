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
		if (i < n - 1)
		{
			if (separator == NULL)
			{
				if (vp)
					printf("%s", vp);
				else
					printf("(nil)");
			}
			else
			{
				if (vp)
					printf("%s%s", vp, separator);
				else
					printf("(nil)%s", separator);
			}
		}
	}
	if (vp)
		printf("%s", vp);
	else
		printf("(nil)");
	printf("\n");
	va_end(va);
}
