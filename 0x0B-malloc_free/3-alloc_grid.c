#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a 2 dimensioal array of integers
 *@width: width
 *@height: height of grid
 *
 *Return: 0.
 */

int **alloc_grid(int width, int height)
{
		 int x;
		 int **gridd;

		 gridd = malloc(width * height * (sizeof(int)));

		 if (gridd == 0)
		 	return (NULL);

		 for (x = 0; x <= width; x++)
		 {
		 	gridd[x] = (int *)malloc(height *sizeof(int));
		 }

		 return (gridd);
}

		 
