#include "main.h"

/**
 * p_str - function that prints a string
 * @list: list contain string
 * Return: length of the string
 */

int p_str(va_list list)
{
	int i = 0;
	char *str = va_arg(list, char *);

	if (!str)
		str = "NULL_STRING";
	i = _strlen(str);
	write(1, str, i);
	return (i);
}

/**
 * p_char - functions print char
 * @list: list contain char
 * Return: Always (1)
 */
int p_char(va_list list)
{
	char c = va_arg(list, int);

	return (_putchar(c));
}
