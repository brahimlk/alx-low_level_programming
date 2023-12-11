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
	int j;
	int i = 0;
	int found;

	while (s[i])
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				found = 1;
				break;
			}
		}
		if (found == 0)
			return (len);
		i++;
	}
	return (len);
}
