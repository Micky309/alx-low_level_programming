#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int n, m, i;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (i = m + 1; i < 10; i++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((i % 10) + '0');

				if (n == 7 && m == 8 && i == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
