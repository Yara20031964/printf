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
}

/**
 * get_type - handling printing
 * @format: pointer to string
 * @list: arguments
 * @i: index of char
 * Return: if printed successfully (size of print) and (-1) if failed
 */
int get_type(const char *format, int i, va_list list)
{
	tt type[] = {
		{'c', p_char},
		{'s', p_str},
		{'d', p_int},
		{'%', p_mod},
		{'i', p_int},
		{'\0', NULL}
	};
	int j;

	for (j = 0; j < 6; j++)
		if (format[i] == type[j].c)
			return (type[j].print(list));
	return (-1);

}
