#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers.
 * @width: width of array
 * @height: height of array
 * Return: null or pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int[width][height]));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
