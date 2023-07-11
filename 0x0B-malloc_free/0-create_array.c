#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of memory
 * @c: specific char
 * Return: null of pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	ptr[0] = c;
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
