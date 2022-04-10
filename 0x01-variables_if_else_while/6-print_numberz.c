#include <stdio.h>

/**
 * main - printing all single numbers in base 10 from 0,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 11; n < 21; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
