#include "main.h"

/**
main - this function to print _putchar
Description: we prin using _putchar function
Return: Stops the program
*/
int main(void)
{
	int i;
	char arr[8] = ["_", "p", "u", "t", "c", "h", "a", "r"];

	for (i = 0; i <= 7; i++)
		_putchar(arr[i]);
	return (0);
}
