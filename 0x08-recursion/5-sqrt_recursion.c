#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: integer
 * Return 0 or -1
 */
int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n < 0)
		return (-1);
	while (sqrt * sqrt < n)
		sqrt++;
	if (sqrt * sqrt == n)
		return (sqrt);
	else
		return (-1);
}
