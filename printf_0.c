#include "main.h"

/**
 * _printf - function print argument
 *@format: argument
 *Return: return size or -1
 */

int _printf(const char *format, ...)
{
	int i, y = 0, m;
	va_list list;

	if (!format)
		return (-1);
	va_start(list, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			y++;
		}
		else
		{
			i++;
			m = get_type(format, i, list);
			if (m == -1)
			{
				_putchar('%'), y++;
				if(format[i])
					_putchar(format[i]), y++;
			}
			else
				y += m;
		}
	}
	va_end(list);
	return (y);
}

/**
 * get_type - handling printing
 * @format: pointer to string
 * @i: position of character
 * @list: arguments
 * Return: if printed successfully (size of print) and (-1) if failed
 */
int get_type(const char *format, int i, va_list list)
{
	tt type[] = {
		{'c', p_char},
		{'s', p_str},
		{'%', p_mod},
		{'i', p_int},
		{'d', p_int}
	};
	int j;

	for (j = 0; j < 5; j++)
		if (format[i] == type[j].c)
			return (type[j].print(list));
	return (-1);

}
