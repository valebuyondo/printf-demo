#include "main.h"
#include <stdarg.h>


int print_string(char *str)
{
    int len = 0;
    while (str && *str)
    {
        len += _putchar(*str);
        str++;
    }
    return len;
}

int print_integer(int n)
{
    unsigned int num;
    int count = 0;

    if (n < 0)
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

    return count;
}

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    char *stringValue;
    int intValue;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
            case 'c':
                intValue = va_arg(args, int);
                count += _putchar(intValue);
                break;

            case 's':
                stringValue = va_arg(args, char*);
                count += print_string(stringValue);
                break;

            case '%':
                count += _putchar('%');
                break;

            case 'd':
            case 'i':
                intValue = va_arg(args, int);
                count += print_integer(intValue);
                break;

            default:
                count += _putchar(*format);
                break;
            }
        }
        else
        {
            count += _putchar(*format);
        }

        format++;
    }

    va_end(args);

    return count;
}

