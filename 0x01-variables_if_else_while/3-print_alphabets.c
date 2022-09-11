#include <stdio.h>
/**
 * main - prints lowercase alphabets
 * followed by newline
 * Return: return 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
