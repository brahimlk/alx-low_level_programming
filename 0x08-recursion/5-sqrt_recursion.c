#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: integer
 * Return: 0 or -1
 */
int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n < 0)
		return (-1);
	sqrt = _sqrt(n, sqrt)
	if (sqrt * sqrt == n)
		return (sqrt);
	else
		return (-1);
}
/**
 * _sqrt - function that test sqrt
 * @n: integer
 * @sqrt: test sqrt
 * Return: sqrt
 */
int _sqrt(int n, int sqrt)
{
	if (sqrt * sqrt >= n)
		return (sqrt);
	sqrt++;
	return (_sqrt(n, sqrt));
}
