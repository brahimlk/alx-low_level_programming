#include <stdio.h>
/**
 * main - program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int i, sum_1 = 0, sum_2 = 0, sum = 0;

	for (i = 1; i <= 50; i++)
	{
		sum_2 = sum;
		if (i > 2)
			sum = sum_1 + sum_2;
		else
			sum = i;
		printf("%d", sum);
		if (i != 50)
			printf(", ");
		sum_1 = sum;
	}
	return (0);
}
