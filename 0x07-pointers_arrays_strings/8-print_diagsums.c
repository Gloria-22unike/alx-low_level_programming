#include <stdio.h>
#include "main.h"

/** 
 * print_diagsums - pritns the sum of the two diaggnals
 * of a square matrix of integers
 * @n square matrix of which we print the sum of diagonals
 * @size: size of the marix
 */
void print_diagsums (int *a, int size)
{
	int i;
	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; 1++)
	{
		sum += a[(size * 1) + i];
		sum1 += a[(size + (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}


