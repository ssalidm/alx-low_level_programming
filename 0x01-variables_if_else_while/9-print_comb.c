#include <stdio.h>
/**
 * main - This program prints all possible combinations
 * of single-digit numbers separated by `,` and
 * followed by a space.
 * Return: 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}