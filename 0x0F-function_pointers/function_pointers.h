#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Header files */
#include <stdio.h>

/* Declarations */
void print_name(char *name, void (*f)(char *));
#endif
