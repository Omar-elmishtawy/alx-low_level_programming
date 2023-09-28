#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
unsigned int binary_to_uint(const char *b);
unsigned int power(unsigned int x, unsigned int y);
void print_binary(unsigned long int n);
void _putchar(char x);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
