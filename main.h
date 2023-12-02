#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * Specifier- Struct to hold specier and its function
 * @type:char pointer
 * @f:pointer to a function that takes achar * 
 */

typedef struct specifier
{
	char *type;
	void (*f)(char *s);
}format;

void (*handle_format(char *specifier))(char *);
int _printf(const char * format, ...);



#endif
