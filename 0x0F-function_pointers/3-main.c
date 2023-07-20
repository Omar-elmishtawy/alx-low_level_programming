#include "3-calc.h"

/**
 * main - masid
 * @argc: sad
 * @argv: dd
 * Return: dasd
 */

int main(int argc, char **argv)
{
	int a,b;
	int (*op)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (!op)
		printf("Error\n"), exit(99);

	printf("%d\n", op(a, b));

	return (0);
}
