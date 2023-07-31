#ifndef MAIN_H
#define MAIN_H

/* Header files */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

/* Declarations */
void _putchar(int);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
#endif