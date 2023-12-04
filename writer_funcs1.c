#include "main.h"

/**
 * count - counts number of digits
 * @n : int to count
 * Return: returns the number of digits 
 */
int count(int n)
{
	unsigned int c;

	while (n != 0)
	{
		n /= 10;
		c++;
	}
	
	return (c);
}


int write_i(va_list arg)
{
	int n = va_arg(arg, int);
	

}
