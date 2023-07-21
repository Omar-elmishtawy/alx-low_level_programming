#include "variadic_functions.h"

/**
 * print_numbers - returns the sum of all its parameters.
 * @n: amount of the arguments.
 * @p: ldsm
 *
 * Return: sum of its parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list ptr;
	unsigned int i;
	int sum = 0;

	if (!separator)
		separator = " ";
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		printf("%d%c ", va_arg(ptr, int), separator);

	va_end(ptr);
}
