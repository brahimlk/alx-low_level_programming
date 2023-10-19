#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - program that performs simple operations.
 *
 * @argc: arg count.
 * @argv: arg vector.
 *
 * Return: op result.
 */
int main(int argc, char **argv)
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2] == "/" || argv[2] == "%") && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if ((get_op_func(argv[2]))(a, b) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	return ((get_op_func(argv[2]))(a, b));
}
