#include "main.h"

/**
 * utoa - Convert an unsigned int to a string.
 * @u: The unsigned int
 * @buff: A pointer to a char
 * @radix: The numerical base to use for the conversion.
 *
 * Return: A pointer to the beginning of the resulting string (same as buffer).
 */
char *utoa(unsigned int u, char *buff, int radix)
{
	int start_idx ,end_idx;
	int idx;

	/* Handle special case when the number is 0 */
	if (u == 0)
	{
		buff[0] = '0';
		buff[1] = '\0';
		return (buff);
	}

	/* Initialize index for the buffer */
	idx = 0;

	/* Process the number in reverse order and store digits in the buffer */
	while (u != 0)
	{
		int remainder = u % radix;

		if (remainder < 10)
		{
			buff[idx] = (char)('0' + remainder);
		}
		else
		{
			buff[idx] = (char)('a' + remainder - 10);
		}

	idx++;
	u /= radix;
	}

	/* Null-terminate the string */
	buff[idx] = '\0';

	/* Reverse the string in-place */
	start_idx = 0;
	end_idx = idx - 1;

	while (start_idx < end_idx)
	{
	/* Swap characters */
		char tmp = buff[start_idx];

		buff[start_idx] = buff[end_idx];
		buff[end_idx] = tmp;

	/* Move towards the center */
		start_idx++;
		end_idx--;
	}

	return (buff);
}
