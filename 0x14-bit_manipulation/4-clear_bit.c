#include "main.h"
/**
 * clear_bit - as
 * @n: das
 * @index: kdas
 *
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (!n || index > sizeof(n) * 8)
		return (-1);

	x = x << index;
	*n = (~*n) | x;
	*n = (~*n);

	return (1);

}
