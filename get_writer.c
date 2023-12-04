#include "main.h"
/**
 *get_writer - gets writer function for specifier
 *@format: char* to specifier
 *Return: returns a pointer to afunction
 */
int (*get_writer(const char *format))(va_list args)
{
	formats spec[] = {
	{"c", write_c},
	{"s", write_s},
	{"%", write_percent},
	{NULL, NULL}
	};
	int i;

	i = 0;

	while (spec[i].type != NULL)
	{
		if (*spec[i].type == *format)
		{	/*printf("Yes\n");*/
			return (spec[i].f);
		}

		i++;
	}
	return (0);
}

