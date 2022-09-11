#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: returns 0 for success
 */
int main(void)
{
	int d = 48;

	while (d< 58)
	{ 
		putchar(d);
		d++;
	}
	        putchar('\n');
	return (0);
}

