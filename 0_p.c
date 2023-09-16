#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_char(char c)
{
	if (c)
	{
		write(1, &c, 1);
		return (1);
	}
	return (-1);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	return (cnt);
}

/**
 * p_mod - print mod sympol
 * @list: ignore
 * Return: Nothing
 */
int p_mod(va_list list)
{
	(void)list;
	return (p_char('%'));
}
