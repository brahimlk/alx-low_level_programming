#include "main.h"
/**
 * print_rev - function that prints a string
 * in reverse, followed by a new line.
 * @s: string
 */
void print_rev(char *s)
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
	{
		i++;
		j = i;
	}
	for (i = j; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
