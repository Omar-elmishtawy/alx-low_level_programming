#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - get last digit of a number.
 * Description: this get the last digit
 * and checks if it greater than five
 * or less than six.
 * Return: Stops the program
 */
int main(void)
{
	int x;
	int y;
	int z;
	int m;

	for (x = 48; x <= 56; x++)
	{
		for (y = 48; y <= 57 ; y++)
		{
			for (z = 48; z <= 57 ; z++)
			{
				for (m = 48; m <= 57; m++)
				{
					putchar(x);
					putchar(y);
					putchar(32);
					putchar(z);
					putchar(m);
					if (x <= 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
