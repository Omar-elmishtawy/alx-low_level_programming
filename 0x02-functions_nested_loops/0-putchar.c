#include "main.h"

/**
 * main - this function to print _putchar
 * Description: we prin using _putchar function
 * Return: Stops the program
 */
int main(void)
{
	int i;
	char arr[9] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n' };

	for (i = 0; i < 9; i++)
		_putchar(arr[i]);
	return (0);
}
