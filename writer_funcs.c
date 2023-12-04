#include "main.h"
/**
 *write_c - writes char to output stream.
 * @arg: va_list argumnet
 * Return: int number of elements printered
 */
int write_c(va_list arg)
{
	char c = (char)va_arg(arg, int);

	//printf("\n varg is :%c", c);
	_putchar(c);
	return (1);
}
