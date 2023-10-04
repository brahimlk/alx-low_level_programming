#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: NULL or pointer.
 */
char *argstostr(int ac, char **av)
{
	unsigned long int i, j;
	int k = 0;
	int size = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size += strlen(av[i]) + 1;
	ptr = malloc(size * sizeof (char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
	}
	return (ptr);
}
