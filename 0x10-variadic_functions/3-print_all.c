#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: Pointer to the list of types of arguments passed to this function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	va_list va;

	va_start(va, format);
	while (format != NULL && format[i])
	{
		c = format[i];
		i++;
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(va, int));
				break;
			case 'i':
				printf("%d", va_arg(va, int));
				break;
			case 'f':
				printf("%f", va_arg(va, double));
				break;
			case 's':
				print_string(va_arg(va, char *));
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	va_end(va);
	printf("\n");
}
/**
 * print_string - Prints string
 * @s: Pointer to string
 */
void print_string(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
