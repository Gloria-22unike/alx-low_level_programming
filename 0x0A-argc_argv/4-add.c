#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - checks if string is a number
 * @s: string
 * Return: On success 1.
 * if not a number, 0 is returned.
 */

int _isnumber(char *s)
{
	int i = 0;
	int check = 1;
	int d = 0;

	if (*s == '-')
		i++;
	for (; *(s + 1) != 0; i++)
	{
		d = isdigit(*(s + 1));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int i;
	int n = 0;
	int ex = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				n += atoi(argv[i]);
			else
				ex = 1;
		}
	}
	if (ex == 0)
		printf("%i\n", n);
	else
		printf("%s\n", "Error");
	return (ex);
}

