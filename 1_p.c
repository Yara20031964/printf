#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line.
 * @str: pointer to the string to print
 * Return: no return
 */

int p_str(va_list list)
{
	int i = 0;
	char *str = va_arg(list, char *);
	
	if (!str)
		str = "(null)";
	i = _strlen(str);
	write(1, str, i);
	return (i);
}
