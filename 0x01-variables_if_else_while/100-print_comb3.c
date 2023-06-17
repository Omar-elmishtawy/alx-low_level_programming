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

	for (x = 48; x < 57; x++)
	{
		for (y = (x + 1); y <= 57; y++)
		{
			putchar(x);
			putchar(y);

			if (x < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
