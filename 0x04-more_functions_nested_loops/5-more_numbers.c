#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers to 14
 * 10 times
 * Return: returns nothing
 */

void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 15; n2++)
		{
			if (n2 >= 10)
				_putchar((n2 / 10) + 48);
			_putchar((n2 % 10) + 48);
		}
		_putchar('\n');
	}
}

