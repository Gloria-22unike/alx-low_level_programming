#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_gris - frees a 2 dimensional grid previously created by
 * alloc_grid function.
 * @grid: matric double pointer
 * @height: rows (pointer)
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free (grid);
}

