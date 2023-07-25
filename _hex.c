#include "main.h"

/**
 * _hex - Calculate the number of digits in a hexadecimal value.
 * @value: The hexadecimal value to calculate digits for.
 *
 * Return: The number of digits in the hexadecimal value.
 */
int _hex(unsigned long value)
{
	int len;

	len = 0;
	while (value)
	{
		value = value / 16;
		len++;
	}
	return (len);
}
