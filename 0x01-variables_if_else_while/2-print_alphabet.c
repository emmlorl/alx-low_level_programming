#include <stdio.h>

/**
 * main - printing alphabets in lowercase
 * using putchar fxn
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{	
		putchar(al);
	}
	putchar('\n');
	return (0);
}
