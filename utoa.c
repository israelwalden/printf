#include "main.h"

/**
 * utoa - converts unsigned ints to asci
 * @u: unsiigned int
 * @buff: pointer to char buffer to store created asci
 * @radix: int value for number system
 * Return: returns a pointer to a string
 */
char *utoa(unsigned int u, char *buff, int radix)
	{
	int idx;
	int start_idx, end_idx;
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
			buff[idx] = (char)('a' + remainder);
		}

		u /= radix;
	}

	/* Null-terminate the string */
	buff[idx] = '\0';

	/* Reverse the string in-place */
	end_idx = idx - 1,start_idx = 0;

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
