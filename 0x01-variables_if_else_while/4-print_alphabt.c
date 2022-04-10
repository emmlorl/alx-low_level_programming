#include <stdio.h>

/**
 * main - printing alphabets in lowercase except q and e,
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}

