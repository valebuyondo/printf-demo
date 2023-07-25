#include "main.h"

/**
 * _printf - Print formatted data to the standard output.
 * @format: The format string.
 * @...: The variable arguments to be formatted and printed.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int len;
	int i;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += _formats(ap, format[i]);
		}
		else
			len += _putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
