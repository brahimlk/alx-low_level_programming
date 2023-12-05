#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @src: pointer to char.
 * @dest: pointer to char.
 * @n: number of bytes.
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
