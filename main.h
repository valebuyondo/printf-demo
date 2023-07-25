
#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int	_printf(const char *str, ...);
int	_putchar(int c);
int	_formats(va_list args, char format);
int	_putstr(char *s);
int	_dec(long int value);
int	_nbr(long int nbr);
int	_unsigned(unsigned int nbr);
int	_hex2(unsigned long smallx);
int	_big(unsigned int n);
int	_void(void *ptr);
int	_hex(unsigned long value);

#endif