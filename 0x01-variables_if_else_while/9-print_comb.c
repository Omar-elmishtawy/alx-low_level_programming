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

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
