#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/* Standard libraries */
#include "stdio.h"
#include "math.h"

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* Custom libraries */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_sub_array(int *array, int L, int R);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int binary_search_leftmost(int *array, size_t low, size_t high, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif
