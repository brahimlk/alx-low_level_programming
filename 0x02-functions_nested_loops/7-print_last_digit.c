#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: input number
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n % 10;
		_putchar(n + '0');
	}
	else
	{
		n = n % 10;
		return (n);
	}
}
