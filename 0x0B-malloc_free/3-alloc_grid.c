#include "main.h"
#include <stdlib>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers.
 * @width: width of array
 * @height: height of array
 * return: null or pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <=0)
		return (NULL);
	ptr = malloc(width * height * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			ptr[i * height + j] = 0;
	}
	return (ptr);
}
