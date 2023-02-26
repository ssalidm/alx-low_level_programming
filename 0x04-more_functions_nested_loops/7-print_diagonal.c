#include "main.h"
/**
 * print_diagonal - prints a diagonal line of
 * '\' characters in the terminal
 *
 * @n: the number of times the '\'
 * character should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
