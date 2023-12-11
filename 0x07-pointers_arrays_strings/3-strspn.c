#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: target string.
 * @accept: argument string.
 * Return: num of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int j ;
	int i = 0;

	while (s[i])
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				len++;
		}
		i++;
	}
	return (len);
}
