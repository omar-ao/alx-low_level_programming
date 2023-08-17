#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: Pointer to the list of types of arguments passed to this function
 */
void print_all(const char * const format, ...)
{
	int i = 0, len, skip;
	char c;
	va_list va;

	va_start(va, format);
	len = strlen(format);
	while (i < len)
	{
		c = format[i];
		skip = 0;

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
				skip = 1;
		}
		if (i < len - 1 && skip == 0)
			printf(", ");
		i++;
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
		printf("(nil)");
	else
		printf("%s", s);
}
