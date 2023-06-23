#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: input character
 * Return: 1 if c upper, 0 otherwise
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
