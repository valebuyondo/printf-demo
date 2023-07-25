#include "main.h"

/**
 * _formats - Format and print data based on the given format specifier.
 * @args: The va_list of arguments.
 * @format: The format specifier to determine the type of data to print.
 *
 * Return: The number of characters printed.
 */
int _formats(va_list args, char format)
{
	int len;

	len = 0;
	if (format == 'c')
		len += _putchar(va_arg(args, int));
	else if (format == 's')
		len += _putstr(va_arg(args, char *));
	else if ((format == 'd') || (format == 'i'))
		len += _nbr(va_arg(args, int));
	else if (format == 'u')
		len += _unsigned(va_arg(args, unsigned int));
	else if (format == 'X')
		len += _big(va_arg(args, unsigned int));
	else if (format == 'x')
		len += _hex2(va_arg(args, unsigned int));
	else if (format == 'p')
		len += _void(va_arg(args, void *));
	else
		len += _putchar(format);
	return (len);
}
