#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/* Standard libraries */
#include "stdio.h"
#include "math.h"

/* Custom libraries */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_sub_array(int *array, int L, int R);
int jump_search(int *array, size_t size, int value);
int linear_s(int *array, int L, int R, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int binary_search_leftmost(int *array, size_t low, size_t high, int value);

#endif
