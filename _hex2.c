#include "main.h"

/**
 * _transformersx - Convert an unsigned long integer to hexadecimal string.
 * @nbr: The number to convert.
 *
 * Return: The hexadecimal string.
 */
char *_transformersx(unsigned long nbr)
{
	int tmp;
	char *curr;
	int i;

	i = 0;
	curr = malloc(_hex(nbr) + 1);
	while (nbr != 0)
	{
		tmp = nbr % 16;
		if (tmp < 10)
		{
			curr[i] = tmp + 48;
			i++;
		}
		else
		{
			curr[i] = tmp + 87;
			i++;
		}
		nbr = nbr / 16;
	}
	curr[i] = '\0';
	return (curr);
}

/**
 * _hex2 - Print an unsigned long integer in lowercase hexadecimal format.
 * @smallx: The number to print.
 *
 * Return: The number of characters printed.
 */
int _hex2(unsigned long smallx)
{
	char *arr;
	int j;
	int len;

	j = 0;
	arr = 0;
	len = 0;
	if (smallx == 0)
	{
		_putchar('0');
		return (1);
	}
	arr = _transformersx(smallx);
	len = _hex(smallx);
	j = len - 1;
	while (j >= 0)
		_putchar(arr[j--]);
	free(arr);
	return (len);
}
