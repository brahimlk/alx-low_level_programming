#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: input number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int r = n;

	if (n < 0)
		r = n * -1;
	r = r % 10;
	_putchar(r + '0');
	return (r);
}
