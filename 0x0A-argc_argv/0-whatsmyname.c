#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line.
 *
 * @argc: The number of command-line arguments.
 * @argv: Pointer to the list of command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
