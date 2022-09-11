#include <stdio.h>
/**
 * main - prints lowercase alphabets
 * followed by newline
 * Retuen: return 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
