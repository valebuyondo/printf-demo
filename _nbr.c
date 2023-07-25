#include "main.h"

/**
 * _nbr - Print a long integer.
 * @nbr: The number to print.
 *
 * Return: The number of characters printed.
 */
int _nbr(long int nbr)
{
	int len;

	len = 0;
	len = _dec(nbr);
	if (nbr >= 0 && nbr <= 9)
	{
		_putchar(nbr + '0');
	}
	if (nbr < 0)
	{
		_putchar('-');
		_putnbr(-nbr);
	}
	else if (nbr > 9)
	{
		_putnbr(nbr / 10);
		_putnbr(nbr % 10);
	}
	return (len);
}
