#include "main.h"

/**
 * print_alphabet_x10 - This program
 * prints the alphabet 10 times in
 * lowercase followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
while (i < 10)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}
