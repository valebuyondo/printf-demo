#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - prints out output to the console
 * @format: string formatter
 * Return: returns the number of arguments passed
 */

int _printf(const char *format, ...)
{
	int i;
	int j;
	int len = 0;
	va_list arg_list;

	va_start(arg_list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
			{
				char *str;

				str = va_arg(arg_list, char *);
				for (j = 0; str[j] != '\0'; j++)
				{
					_putchar(str[j]);
					len++;
				}
			}
			if (format[i] == 'c')
			{
				int character;
				character = va_arg(arg_list, int);
				_putchar(character);
				len++;
			}

		}
		else
		{
			_putchar(format[i]);
			len++;

		}
	}
	va_end(arg_list);
	return (len);

}
