#include "main.h"
/**
* write_b - converts an int to binary
* @arg: va arg pointer
* Return: number of printed elment
**/
int write_b(va_list arg)
{
	unsigned int binary[32];
	int i = 0;
	unsigned int n = 0, count = 0;

	n = va_arg(arg, unsigned int);
	if (n <= 1)
	{
		_putchar(n + '0');
		count++;
	}
	else
	{
	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		printf("%d", n);
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		count++;
	}
	}
	return (count);
}

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
