#ifndef MAIN_H
#define MAIN_H

/* Header files */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Declarations */
int **free_grid(int **, int);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *argstostr(int ac, char **av);
char **free_words(char **, int);
int get_number_of_words(char *);
char **strtow(char *str);
#endif
