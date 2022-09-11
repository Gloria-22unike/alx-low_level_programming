#include <stdio.h>
/**
 * main - print single numbers of base 10
 * starting from 0,followed by new line
 * Return: returns 0 for success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}

