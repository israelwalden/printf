#include <limits.h>
#include <stdio.h>
#include "main.h"
int main()
{	
	void *addr;
	addr = (void *)0x7ffe637541f0;
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
	return 0;
}
