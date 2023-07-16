#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, k = '0', j;

	for (i = '0'; i <= '9'; i++)
		for (j = k; j <= '9'; j++)
			if (i != j)
				putchar(i);
	putchar(j);
	if (i == j)
		if (i == '8' && j == '9')
		else
		putchar(',');
			putchar(' ');
			k++;
	putchar('\n');
	return (0);
}
