#include "main.h"

/**
 * _printf - Print formatted data to the standard output.
 * @str: The format string.
 * @...: The variable arguments to be formatted and printed.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *str, ...)
{
	va_list ap;
	int len;
	int i;

	i = 0;
	len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += _formats(ap, str[i]);
		}
		else
			len += _putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
