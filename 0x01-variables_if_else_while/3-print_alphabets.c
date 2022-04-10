#include <stdio.h>

/**
 * main - printing lower case and uppercase 
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
