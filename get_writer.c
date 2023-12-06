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
	{"d", write_i},
	{"i", write_i},
	{"b", write_b},
	{"u", write_u},
	{"o", write_o},
	{"x", write_x},
	{"X", write_X},
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

