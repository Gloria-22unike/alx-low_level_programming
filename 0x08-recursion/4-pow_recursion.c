#include "main.h"

/**
 * _pow_recursion - raises x to the power y
 * @x: Number Integers
 * @y: power
 *
 * Return: on success 1
 * On error, -1 with appropriate errno
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

