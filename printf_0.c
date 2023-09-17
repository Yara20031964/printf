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
		if (format[i] != "%")
		{
			_putchar(format[i]);
			++y;
		}
		else
		{
			++i;
			if (format[i] != '\0')
			{
				m = get_type(format[i], list);
				if (m == -1)
				{
					_putchar(format[i - 1]);
					_putchar(format[i]);
					y += 2;
				}
				else
					y += m;
			}
			return (-1);
		}
	}
	va_end(list);
	return (y);
}

/**
 * get_type - handling printing
 * @format: pointer to string
 * @list: arguments
 * Return: if printed successfully (size of print) and (-1) if failed
 */
int get_type(char format, va_list list)
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
