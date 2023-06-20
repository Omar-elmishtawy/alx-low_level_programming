#include "main.h"

/**
 * times_table - this function to print _putchar
 * Description: we prin using _putchar function
 * Return: 1 when it is lower case and 0 when otherwise
 */
void times_table(void)
{
	int x;
	int z;
	int f;
	int l;
	int y = 0;

	for (x = 0; x <= 9; x++)
	{
		for (z = 0; z <=9; z++)
		{
			f = z * y;
			if (f < 10)
				_putchar('0' + f);
			else
				l = f % 10;
				f = f - l;
				_putchar('0' + f);
				_putchar('0' + l);
			if (z < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
		y++;
	}
}
