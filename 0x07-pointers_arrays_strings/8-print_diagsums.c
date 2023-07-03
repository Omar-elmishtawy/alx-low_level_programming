#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - test function
 * Description: test
 * @a: size
 * @size: ad
 */


void print_diagsums(int *a, int size)
{
	int i = 0;
	int sumd1 = 0;
	int sumd2 = 0;
	int step1 = size + 1;
	int step2 = size - 1;
	int pos = size - 1;

	while (i < size)
	{
		sumd1 = sumd1 + a[i * step1];
		sumd2 = sumd2 + a[pos + (i * step2)];
		i++;
	}
	printf("%d, %d\n", sumd1, sumd2);
}
