#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    int intValue;
    char *stringValue;

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
                if (stringValue)
                {
                    while (*stringValue)
                    {
                        count += _putchar(*stringValue);
                        stringValue++;
                    }
                }
                break;

            case '%':
                count += _putchar('%');
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

