#include "main.h"

/**
 * _void - Print a memory address (pointer) in hexadecimal format.
 * @ptr: The memory address (pointer) to print.
 *
 * Return: The number of characters printed.
 */
int _void(void *ptr)
{
	int len;

	len = 0;
	write(1, "0x", 2);
	len = 2 + _hex2((unsigned long)ptr);
	return (len);
}
