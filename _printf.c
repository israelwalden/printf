#include "main.h"

/**
 * _printf - prints to the output stream
 * @format: pointer to first argument
 * @...: varaiable numer of arguments
 * Return: returns number of elements printed
 */
int _printf(const char *format, ...)
{
	unsigned int count = 0;
	int (*f)(va_list);

	va_list varguments;

	va_start(varguments, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				write(1, "%%", 1);
				count++;
			}
			else
			{
				f = get_writer(format);
				if (f != NULL)
				{
				count += f(varguments);
				}
				else
				{
				format--;
				write(1, format, 1);
				format++;
				write(1, format, 1);
				}
			}
		}
		format++;

	}
	va_end(varguments);
	return (count);
}
