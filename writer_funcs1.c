#include "main.h"

/**
 * write_i - prints an integer
 * @arg: the list of arguments
 * Return: number of printed numbers
 */
int write_i(va_list arg)
{
	int i, num, d, a, n, count = 0;

	n = va_arg(arg, int);
	a = n % 10;
	n = n / 10;
	if (a < 0)
	{
		n = -n;
		a = -a;
		_putchar('-');
		count++;
	}
	num = n;
	d = 1;
	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			num = num / 10;
			d = d * 10;
		}
		while (d >= 1)
		{
			i = n / d;
			_putchar(i + '0');
			count++;
			n = n % d;
			d = d / 10;
		}
	}
	_putchar(a + '0');
	count++;
	return (count);
}
