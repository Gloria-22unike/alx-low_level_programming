#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointere of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */

int main(int argc, char **argc)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}

