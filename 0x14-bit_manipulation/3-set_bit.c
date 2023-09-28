#include "main.h"
/**
 * set_bit - as
 * @n: das
 * @index: kdas
 *
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (!n || index > sizeof(n) * 8)
		return (-1);

	x = x << index;
	n = n | x;

	return (1);

}
