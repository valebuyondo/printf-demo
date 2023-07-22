#include <stdio.h>
#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...)
{
    va_list arg_list;
    va_start(arg_list, format);

    int chars_printed = 0;

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '\0')
                break;

            if (format[i] == 'c')
            {
                char c = va_arg(arg_list, int);
                putchar(c);
                chars_printed++;
            }
            else if (format[i] == 's')
            {
                char *str = va_arg(arg_list, char *);
                for (int j = 0; str[j] != '\0'; j++)
                {
                    putchar(str[j]);
                    chars_printed++;
                }
            }
            else if (format[i] == '%')
            {
                putchar('%');
                chars_printed++;
            }
            else
            {
                putchar('%');
                putchar(format[i]);
                chars_printed += 2;
            }
        }
        else
        {
            putchar(format[i]);
            chars_printed++;
        }
    }

    va_end(arg_list);
    return chars_printed;
}

