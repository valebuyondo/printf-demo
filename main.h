#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */
typedef struct identifierStruct
{
	char *indentifier;

	int (*printer)(va_list);
} identifierStruct;


/**typedef struct format
{
	char *id;
	int (*f)();
} convert_match;
**/
int _putchar(char c);
int print_int(va_list arg);
int print_unsigned(va_list arg);
int _printf(const char *format, ...);
int printIdentifiers(char next, va_list arg);
int print_char(va_list arg);
int print_int(va_list arg);
int print_STR(va_list arg);
int print_str(va_list arg);
int print_unsigned(va_list arg);

#endif