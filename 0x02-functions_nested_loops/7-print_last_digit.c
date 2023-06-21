#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: input number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = (n % 10) * -1;
	r = n % 10;
	_putchar((r % 10) + '0');
	return (r % 10);
}
