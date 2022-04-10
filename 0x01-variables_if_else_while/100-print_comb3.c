#include <stdio.h>

/**
 * main - printing all possible combination of 2 digits,
 * printing in assending order too
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2;

	n1 = 48;
	n2 = 48;

	while (n2 < 58)
	{
		n1 = 48;
		while (n1 < 58)
		{
			if (n2 != n1 && n2 < n1)
			{
				putchar(n2);
				putchar(n1);
				if (n1 == 57 && n2 == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n1++;
		}
		n2++;
	}
	putchar('\n');
	return (0);
}
