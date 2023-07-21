#include "variadic_functions.h"

/**
 * print_strings - returns the sum of all its parameters.
 * @n: amount of the arguments.
 * @separator: ldsm
 *
 * Return: sum of its parameters.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *s;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(valist, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
