#include "main.h"
/**
* write_u - writes unsigned int
* @arg: va_list arg
* Return: int number of elements printed
*/
int write_u(va_list arg)
{
	/*unsigned int count, i;*/
	unsigned int u;
	char string[20];
	char *us;

	u = va_arg(arg, unsigned int);
	us = utoa(u, string, 10);

	write(1, us, strlen(us));
	return (strlen(us));
}


/**
* write_o - writes unsigned inti
* @arg: va_list arg
* Return: int number of elements printed
*/
int write_o(va_list arg)
{
	/*unsigned int count, i;*/
	unsigned int u;
	char string[20];
	char *us;

	u = va_arg(arg, unsigned int);
	us = utoa(u, string, 8);

	write(1, us, strlen(us));
	return (strlen(us));
}

/**
* write_x - writes unsigned inti
* @arg: va_list arg
* Return: int number of elements printed
*/
int write_x(va_list arg)
{
	/*unsigned int count, i;*/
	unsigned int h;
	char string[20];
	char *hs;

	h = va_arg(arg, unsigned int);
	hs = utoa(h, string, 16);

	write(1, hs, strlen(hs));
	return (strlen(hs));
}


/**
* write_X - writes unsigned inti
* @arg: va_list arg
* Return: int number of elements printed
*/
int write_X(va_list arg)
{
	/*unsigned int count, i;*/
	unsigned int u;
	char string[20];
	char *us;

	u = va_arg(arg, unsigned int);
	us = utoa2(u, string, 16);

	write(1, us, strlen(us));
	return (strlen(us));
}
