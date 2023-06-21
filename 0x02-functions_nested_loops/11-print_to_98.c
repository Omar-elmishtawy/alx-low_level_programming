#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this function to print _putchar
 * Description: we prin using _putchar function
 * @x: chracter to check in lower case or no
 * @y: character two
 * Return: 1 when it is lower case and 0 when otherwise
 */
void print_to_98(int n)
{
	if(n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
	
	}
}
