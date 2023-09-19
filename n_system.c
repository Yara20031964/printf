#include "main.h"

/**
 * p_uns - print unsigned number
 * @list: list contain number
 * Return: num of digits
 */
int p_uns(va_list list)
{
	unsigned int number = va_arg(list, unsigned int);
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
