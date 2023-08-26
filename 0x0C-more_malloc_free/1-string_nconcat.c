#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of elements from s2
 * Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned long int i, size;
	unsigned long int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		size = (strlen(s1) + strlen(s2) + 1) * sizeof(char);
	else
		size = (strlen(s1) + n + 1) * sizeof(char);
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		ptr[i] = s1[i];
	for (i = strlen(s1); i < size - 1; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
