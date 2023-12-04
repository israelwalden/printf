#include "main.h"
/**
 *write_c - writes char to output stream.
 * @arg: va_list argumnet
 * Return: int number of elements printered
 */
int write_c(va_list arg)
{
	char c;
	char *cptr;

	c = va_arg(arg, int);
	cptr = &c;

	_putchar(*cptr);
	return (1);
}

/**
 *write_s - writes char to output stream.
 * @arg: va_list argumnet
 * Return: int number of elements printered
 */
int write_s(va_list arg)
{
	int count;
	char *str;

	count = 0;
	str = va_arg(arg, char *);

	if (*str == '\0')
	{
		str = "(null)";
	}
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}

/**
 *write_percent - writes char to output stream.
 * @arg: va_list argumnet
 * Return: int number of elements printered
 */
int write_percent(va_list arg)
{
	/*int c;*/
	/*c = va_arg(arg, int);*/
	void(arg);
	write(1, "%%", 1);
	return (1);
}
