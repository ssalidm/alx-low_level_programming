#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character to the
 * standard output
 * @c: the character to print
 * Return: on success 1, on error -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
