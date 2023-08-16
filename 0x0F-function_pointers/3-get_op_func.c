#include "3-calc.h"
/**
 * get_op_func - Returns a pointer to the function that corresponds to
 * the operator given as a parameter
 *
 * @s: The operator passed as argument to the program
 * Return: NULL if s does not match any of the 5 expected operators
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (ops[5].f);
}
