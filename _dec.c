#include "main.h"

/**
 * _dec - Calculate the number of digits in a decimal value.
 * @value: The decimal value to calculate digits for.
 *
 * Return: The number of digits in the decimal value.
 */
int _dec(long int value)
{
	int len;

	len = 0;
	if (value == 0)
		return (1);
	if (value < 0)
	{
		value *= -1;
		len++;
	}
	while (value)
	{
		value = value / 10;
		len++;
	}
	return (len);
}
