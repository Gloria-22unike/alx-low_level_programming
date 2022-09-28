#include "main.h"

/**
 * _strlen_recursion - returns length of strings
 * @s: input string
 *
 * Return: On success 1.
 * On error, -1 with appropriate errno.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

