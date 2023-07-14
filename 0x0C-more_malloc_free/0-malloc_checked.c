#include "main.h"

/**
 * malloc_checked - main
 * @b: sdasd
 *
 * Return: absolute value of @n
 */
void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
