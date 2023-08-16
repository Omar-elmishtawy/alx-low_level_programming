#include "main.h"
/**
 * get_bit - as
 * @n: das
 * @index:dsad
 * Return: dsad
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int count = 0;
	unsigned long int *ptr;
	unsigned int x = index;

	printf("dsad");
	ptr =  (unsigned long int*)malloc(sizeof(unsigned long int));
	if (!ptr)
		return (-1);
	if (n == 0 && index == 0)
		return (0);
	index++;
	while (index--)
	{
		if (n & 1)
		{
			ptr[count] = 1;
		}
		else
			ptr[count] = 0;
		if (index != 0)
			n = n >> 1;
		count++;
	}
	if (index > count)
		return (-1);
	if (n)
	{
		return (ptr[x]);
	}
	return (-1);
}
