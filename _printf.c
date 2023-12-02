#include "main.h"

/**
 * _printf - prints to the output stream
 * @format: pointer to first argument
 * @...: varaiable numer of arguments
 * Return: returns number of elements printed
 */
int _printf(const char *format, ...)
{
	int count;
	count  = 0;

	while (*format != 0)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		format++;
			
	}
	return (count);
}
