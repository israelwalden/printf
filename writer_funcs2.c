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
