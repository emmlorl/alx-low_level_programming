#include <stdio.h>

/**
 * main - printing all numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char c;

	for (n = 10; n <= 15; n++)
	{
	putchar(n);
	}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
