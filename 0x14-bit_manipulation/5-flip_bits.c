#include "main.h"
/**
 * flip_bits - as
 * @n: das
 * @m: kdas
 *
 * Return: 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = 0;

	xor = n ^ m;

	while (xor != 0)
	{
		if (xor & 1)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
