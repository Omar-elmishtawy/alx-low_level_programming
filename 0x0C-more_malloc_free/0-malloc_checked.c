#include "main.h"
#include "stdio.h"

/**
 * malloc_checkdd - test function
 * Description: test
 * @b: string
 * Return: jfds
 */

void *malloc_checked(unsigned int b)
{
	int *arr = malloc(b);

	if (arr == 0)
		return (98);
	return (arr);	
}
