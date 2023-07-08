#include <stdio.h>
#include <stdlib.h>

/**
 *notdigit - test
 *@c: c
 *Return: 0 or 1
 */
int notdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (0);
	else
		return (1);
}

/**
 * main - test function
 * @argc: num
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i != argc)
		{
			if (notdigit(argv[i][0]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
