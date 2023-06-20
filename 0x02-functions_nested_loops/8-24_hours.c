#include "main.h"

/**
 * jack_bauer - this function to print _putchar
 * Description: we prin using _putchar function
 * Return: 1 when it is lower case and 0 when otherwise
 */
void jack_bauer(void)
{
	int x;
	int y;
	int z;
	int w;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 4; y++)
		{
			for (z = 0; z < 6; z++ )
			{
				for (w = 0; w < 10; w++)
				{
					_putchar('0' + x);
					_putchar('0' + y);
					_putchar('0' + z);
					_putchar('0' + w);
					_putchar('\n');
				
				}
			
			
			}
		
		
		}
	
	
	
	}
}
