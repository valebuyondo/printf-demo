#include "main.h"

/**
 * _transformers - Convert an unsigned integer to hexadecimal string.
 * @nbr: The number to convert.
 *
 * Return: The hexadecimal string.
 */
char *_transformers(unsigned int nbr)
{
	char *curr;
	int tmp;
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
			curr[i] = tmp + 55;
			i++;
		}
		nbr = nbr / 16;
	}
	curr[i] = '\0';
	return (curr);
}

/**
 * _big - Print a big unsigned integer in hexadecimal format.
 * @n: The number to print.
 *
 * Return: The number of characters printed.
 */
int _big(unsigned int n)
{
	char *arr;
	int len;
	int j;

	arr = 0;
	j = 0;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	arr = _transformers(n);
	len = _hex(n);
	j = len - 1;
	while (j >= 0)
		_putchar(arr[j--]);
	free(arr);
	return (len);
}
