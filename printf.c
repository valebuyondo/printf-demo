#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_string - prints string
 * @str: string to be printing
 * Return: returns the len
 */

int print_string(char *str)
{
	int len = 0;

	while (str && *str)
	{
		len += _putchar(*str);
		str++;
	}
	return (len);
}
/**
 * print_integer - prints an integer
 * @n: integer to be printed
 * Return: returns the number of integers printed
 */
int print_integer(int n)
{
	unsigned int num;
	int count = 0;
	
	if(n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		count += print_integer(num / 10);
	}
	count += _putchar((num % 10) + '0');
	return (count);
}

/**
* printIdentifiers - output data based on special characters
* @next: character after the %
* @arg: argument for the indentifier
* Return: the number of characters printed
* (excluding the null byte used to end output to strings)
*/

int printIdentifiers(char next, va_list arg)
{
	int functsIndex; identifierStruct functs[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"d", printf_int},
		{"i", printf_int},
		{"u", printf_unsigned},
		{"b", printf_bin},
		{"o", printf_oct},
		{"x", printf_hex},
		{"X", printf_HEX},
		{"S", print_STR},
		{NULL, NULL}
	};
	for (functsIndex = 0; functs[functsIndex].indentifier != NULL; functsIndex++)
	{
		if (functs[functsIndex].indentifier[0] == next)
			return (functs[functsIndex].printer(arg));
	}
	return (0);
}
/**
 * _printf - emulates printf specifiers
 * @format: format specifiers
 * Return: returns the Arguments provide
 */
int _printf(const char *format, ...)
{
	unsigned int i;

	int identifierPrinted = 0, charPrinted = 0;

	va_list arg;

	va_start(arg, format);

	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charPrinted++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			charPrinted++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		identifierPrinted = printIdentifiers(format[i + 1], arg);
		if (identifierPrinted == -1 || identifierPrinted != 0)
			i++;
		if (identifierPrinted > 0)
			charPrinted += identifierPrinted;
		if (identifierPrinted == 0)
		{
			_putchar('%');
			charPrinted++;
		}
	}
	va_end(arg);
	return (charPrinted);
}
