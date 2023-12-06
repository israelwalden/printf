#include <limits.h>
#include <stdio.h>
#include "main.h"
int main()
{	
	unsigned int ui;
	ui = (unsigned int)INT_MAX + 1024;

	_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    return 0;
}
