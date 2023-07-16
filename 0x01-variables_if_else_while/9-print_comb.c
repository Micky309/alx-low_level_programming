#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 n(Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	if (n == '9')
	else
		putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
