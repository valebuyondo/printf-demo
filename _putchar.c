#include "main.h"

/**
 * _putchar - Write a character to the standard output.
 * @c: The character to be written.
 *
 * Return: Always 1 (success).
 */
int _putchar(int c)
{
	write(1, &c, 1);
	return (1);
}
