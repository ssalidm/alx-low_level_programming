#include<stdio.h>
/**
 * main - This program prints all alphabets except 'q' and 'e'
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
