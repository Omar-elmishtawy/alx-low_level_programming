#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print n if positive
 * Description: this check if the 
 * random value of n is positive
 * and print it.
 * Return: Stops the program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);		
	return (0);
}
