#include "main.h"


void print_binary(unsigned long int n)
{
	while (n != 0)
	{
		_putchar(10000000 & n - '0');
		n << 1;
	}

}
