#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL or String
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *ptr;

	size = strlen(s1) + strlen(s2) + 1;
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		ptr[i] = s1[i];
	j = 0;
	for (i = strlen(s1); i < size; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	return (ptr);
}
