#include "main.h"
#include <stdio.h>

/**
 * reverse_array - test function
 * Description: test
 * @a: size
 * @n: dasd
 * Return: jfds
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
