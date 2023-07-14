#include "main.h"
/**
 * malloc_checkdd - test function
 * Description: test
 * @b: string
 * Return: jfds
 */

void *malloc_checked(unsigned int b)
{
	int *arr = malloc(b);

	if (arr == NULL)
		return (98);
	return (arr);
}
