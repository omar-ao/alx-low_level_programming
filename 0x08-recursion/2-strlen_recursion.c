#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String to scan
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	return ((*s) ? (1 + _strlen_recursion(s + 1)) : (0));
}
