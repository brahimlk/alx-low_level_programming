#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argv: vector
 * @argc: count
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc < 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
