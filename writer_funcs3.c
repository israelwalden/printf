#include "main.h"
/**
 *write_p - writes a pointer to output stream.
 * @arg: va_list argumnet
 * Return: int number of elements printered
 */
int write_p(va_list arg)
{
	void *p;
	char paddress[20];
	unsigned int idx, digit, start, end;
	char digit_char, c_holder;
	uintptr_t address;

	p = va_arg(arg, void *);
	address = (uintptr_t)p;
	idx = 0;
	while (address > 0)
	{
		digit = address % 16;

		address /= 16;

		if (digit < 10)
		{
			digit_char = '0' + digit;
		}
		else
		{
			digit_char = 'a' + digit - 10;
		}

		paddress[idx++] = digit_char;
	}
	paddress[idx++] = 'x';
	paddress[idx++] = '0';

	start  = 0, end = idx - 1;
	while (start < end)
	{
		c_holder = paddress[start];
		paddress[start++] = paddress[end];
		paddress[end--] = c_holder;
	}

	write(1, paddress, idx);
	return (idx);
}
