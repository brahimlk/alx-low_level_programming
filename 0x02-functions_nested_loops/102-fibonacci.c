#include <stdio.h>
/**
 * main - program that prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 50; i++)
	{
		if (i < 2)
			sum = (i - 1) + (i - 2);
		else
			sum = i;
		printf("%d", sum);
		if (i != 50)
			printf(", ");
	}
	return (0);
}
