#include <stdio.h>
/**
 * main - prints lowercase alphabets
 * followed by newline, except q and e
 * Return: returns 0 for success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
