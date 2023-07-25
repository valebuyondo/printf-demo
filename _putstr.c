
#include "main.h"

/**
 * _putstr - Print a string to the standard output.
 * @s: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int _putstr(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
		_putchar(s[i++]);
	return (i);
}
