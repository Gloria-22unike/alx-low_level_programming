#include "main.h"

/**
 * sqrt2 - makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: counter - iterates from 1 to n
 *
 * Return: on success 1
 * on error, -1 is returned with appropriate erno
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

