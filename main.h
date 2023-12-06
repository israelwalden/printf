#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifier - Struct to hold specier and its function
 * @type:char pointer
 * @f:pointer to a function that writes
 *
 * Description:
 * This struct is used to hold a format specifier and
 * a pointer to it a required write function.
 */
typedef struct specifier
{
	char *type;
	int (*f)(va_list arg);
} formats;

/*int _strlen(char *s);*/
void (*handle_format(char *specifier))(char *);
int _printf(const char *format, ...);
int _putchar(char c);
char *utoa(unsigned int u, char *buf, int radix);

int (*get_writer(const char *format))(va_list);

int write_c(va_list arg);
int write_s(va_list arg);
int write_i(va_list arg);
int write_b(va_list arg);
int write_u(va_list arg);

/*int write_percent(va_list arg);*/

#endif
