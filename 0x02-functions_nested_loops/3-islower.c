#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Description: function that checks for lowercase character
 *
 * c: input character
 * Return: 0 or 1
 */
int _islower(int c)
{
	c = 'c';
	if (c <= 122 && c >= 97)
		_putchar('1');
	else
		_putchar('0');
	return (0);
}
