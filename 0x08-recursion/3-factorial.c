#include "main.h"

/**
 * factorial - calculates the factorial of n
 * @n: integer
 *
 * Return: on success 1
 * on error, -1 is returnedwith appropraite errno
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

