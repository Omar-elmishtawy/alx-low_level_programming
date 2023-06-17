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

	for (x = 48; x < 56; x++)
	{
		for (y = (x + 1); y < 57; y++)
		{
			for (z = (y + 1); z <= 57 ; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x < 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
