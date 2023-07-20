#include "function_pointers.h"

/**
 * print_name - to print name
 * @name: name
 * @f: pointer to function
 */



void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
	else
	{
		exit(1);
	}
}
