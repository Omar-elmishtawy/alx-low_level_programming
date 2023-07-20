#include "variadic_functions.h"

/**
 * sum_them_all - mskcas
 * @n: msakc
 * Return: ksa
 */

int sum_them_all(const unsigned int n, ...)
{
	int  i, sum = 0;
	va_list ptr;
	
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
