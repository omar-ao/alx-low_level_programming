#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/* Standard libraries */
#include "stdio.h"

/* Custom libraries */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_sub_array(int *array, int L, int R);

#endif
