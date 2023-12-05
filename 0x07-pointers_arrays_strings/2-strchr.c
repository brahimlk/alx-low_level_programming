#include "main.h"
#include <stddef.h>
/**
 * _strchr -  function that locates a character in a string.
 * @s: string.
 * @c: char.
 * Return: pointer or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == '\0' && c != '\0')
		return (NULL);
	else
		return (s);
}
