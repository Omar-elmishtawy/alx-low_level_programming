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
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is ", n, last_digit);
		printf("greater than 5\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is ", n, last_digit);
		printf("less than 6 and not 0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is ", n, last_digit);
		printf("0\n");
	}
	return (0);
}
