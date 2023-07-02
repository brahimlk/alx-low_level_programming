#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: integer
 */
void print_number(int n)
{
	int i;
	int j = 1;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	i = n;
	while (i > 9)
	{
		j *= 10;
		i /= 10;
	}
	while (j > 0)
	{
		_putchar((n / j) + '0');
		n = n % j;
		j /= 10;
	}
}
