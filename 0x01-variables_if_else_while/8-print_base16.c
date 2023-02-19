#include <stdio.h>
/**
* main - This program prints all the numbers of
* base 16 in lowercase, followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
char ch;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (ch = 'a'; ch < 'g'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
