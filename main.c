#include <limits.h>
#include <stdio.h>
#include "main.h"
int main()
{	
	unsigned int ui;
ui = (unsigned int)INT_MAX + 1024;
	 _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("%b\n", 98);
    return 0;
}
