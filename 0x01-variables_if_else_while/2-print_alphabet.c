#include <stdio.h>

/**
 * main - printing alphabets in lowercase
 * using putchar fxn
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{	
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
