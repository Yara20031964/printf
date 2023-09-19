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
		str = "(null)";
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

/**
 * p_int - functiom print number
 * @list: lint contain number
 * Return: size of number
 */
int p_int(va_list list)
{
	long int number = va_arg(list, int);
	char num[1024];
	int i = 0, c = 0;

	if (number == 0)
		num[i] = '0', i++;
	if (number < 0)
		_putchar('-'), number *= -1, c++;
	while (number > 0)
		num[i] = '0' + (number % 10), number /= 10, i++;
	while (i > 0)
		_putchar(num[--i]), c++;
	return (c);
}
