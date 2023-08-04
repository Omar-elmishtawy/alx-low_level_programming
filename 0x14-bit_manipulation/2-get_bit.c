#include "main.h"
/**
 * print_binary - as
 * @n: das
 * Return: dsad
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int count = 0;
	int arr[100];
	unsigned int x = index;

	if (n == 0 && index == 0)
		return (0);
	index++;
	while (index--)
	{
		if (n & 1)
		{
			arr[count] = 1;
		}
		else
			arr[count] = 0;
		if (index != 0)
			n = n >> 1;
		count++;
	}
	if (n)
	{
		return (arr[x]);
	}
	return (-1);
}
