#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

unsigned int binary_to_uint(const char *b);
int _strlen(const char *);
unsigned int _pow(int, int);
int is_valid(const char *);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
