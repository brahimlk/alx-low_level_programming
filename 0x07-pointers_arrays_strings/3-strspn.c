#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: target string.
 * @accept: argument string.
 * Return: num of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s != accept[0])
	{
		while (accept)
		{
			if (s == accept)
				i++;
			accept++;
		}
		s++;
	}
	return (i);
}
