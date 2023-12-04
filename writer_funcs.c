#include "main.h"
/**
 *write_c - writes char to output stream.
 * @arg: va_list argumnet
 * Return: int number of elements printered
 */
int write_c(va_list arg)
{
	char c = va_arg(arg, int);
	char *cptr;
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

	count = 0;

	char *str = va_arg(arg, char *);

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

