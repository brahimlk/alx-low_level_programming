#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Description: function that checks for lowercase character
 *
 * Return: 0 or 1
 */
int _islower(int c)/*c input character*/
{
	char ch = 'c';

	if (ch <= 122 && ch >= 97)
		_putchar('1');
	else
		_putchar('0');
	return (0);
}
