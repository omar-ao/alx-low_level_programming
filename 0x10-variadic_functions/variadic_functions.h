#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/* Header files */
#include <stdarg.h>
#include <stdio.h>

/* Function prototypes */
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif