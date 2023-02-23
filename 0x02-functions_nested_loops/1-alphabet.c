#include "main.h"

/**
 * main - This is the main program.
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
}
/**
 * print_alphabet - This program prints
 * the alphabet in lowercase followed by
 * a new line.
 * Return: void
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
return (0);
}
