#include "main.h"
/**
 * get_bit - as
 * @n: das
 * @index:dsad
 * Return: dsad
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x = 0;
	
	if (index > sizeof(n))
		return (-1);
	n = n >> index;
	x = n & 1;
	return (x);

}
