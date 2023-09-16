#include "main.h"

/**
 * _printf - function print argument
 *@format: argument
 *Return: return size or -1
 */

int _printf(const char *format, ...)
{
	int i, j, y, m;
	va_list list;
	
	if (!format)
		return (-1);
	va_start(list, format);
	for (i = 0; format[i]; i++)
	{

}

int get_type(const char *format, int i, va_list list)
{
	tt type[] = {
		{'c', p_char},
		{'s', p_str},
		{'d', p_int},
		{'%', p_str},
		{'i', p_str},
		{'\0', NULL}
	};
	int j;

	for (j = 0; j < 6; j++)
		if (format[i] == type[j].c)
			return (type[j].print(list));
	return (-1);
		
}	
