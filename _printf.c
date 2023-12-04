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
	int (*f)(va_list);

	va_list varguments;

	va_start(varguments, format);
	count = 0;

	while (*format != 0)
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			f = get_writer(format);
			if (f != NULL)
			{
			/*printf("pointer is : %p", f);*/
			f(varguments);
			count += f(varguments);
			}
		}
		format++;

	}
	return (count);
}
