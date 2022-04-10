#include <stdio.h>

/**
 * main - printing lower case and uppercase 
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	putchar('\n');
	for(i='A'; i<='Z'; i++)
	{
		putchar("%c ",i);
	}

	putchar("\n");
	for(i='a'; i<='z'; i++)
	{
		putchar("%c ",i);
	}

	return (0);
}
