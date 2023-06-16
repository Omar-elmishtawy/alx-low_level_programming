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
	char str[] = "Last digit of %d is %d and is";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
		printf("%s greater than 5\n", str, n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("%s less than 6 and not 0\n", str, n, last_digit);
	else
		printf("%s is 0\n", str, n, last_digit);
	return (0);
}
