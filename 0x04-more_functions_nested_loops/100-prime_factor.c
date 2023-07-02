#include <stdio.h>
/**
 * main - program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	long int prime, fact, i, j;

	for (i = 2; i < num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0 && (j == 1 || j == i))
				prime = i;
		}
		while (num % prime == 0)
		{
			num /= prime;
			fact = prime;
		}
	}
	printf("%ld", fact);
	return (0);
}
