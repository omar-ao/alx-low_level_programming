#ifndef MAIN_H
#define MAIN_H

/* Header files */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <math.h>

/* Declarations */
void _putchar(char);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int _palindrome(char *start, char *end);
int wildcmp(char *s1, char *s2);
#endif
