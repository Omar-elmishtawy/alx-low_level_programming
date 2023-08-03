#include "main.h"

/**
 * binary_to_uint - as
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int result = 0;
	unsigned int x;
	unsigned int count = 0;
	while (b[i] != '\0')
		i++;
	i = i - 1;
	while (i >= 0)
	{
		if (isdigit(b[count]))
			x = b[count] - '0';
		else
			return (0);
		result = result + (x * pow(2, i));
		if (i == 0)
			break;
		i--;
		count++;
		
	}
	

	return (result);
}
