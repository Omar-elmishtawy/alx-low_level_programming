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
	int first_digit;
	int sec_digit;
	int y = 0;

	for (x = 0; x <= 9; x++)
	{
		for (z = 0; z <=9; z++)
		{
			f = z * y;
			if (f < 10)
			{
				_putchar('0' + f);
			}
			else
			{
				sec_digit = f % 10;
				first_digit = (f - sec_digit) / 10;
				_putchar('0' + first_digit);
				_putchar('0' + sec_digit);
			}
			if (z < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (f < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
		y++;
	}
}
