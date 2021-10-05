#include "main.h"

/**
 * put_str - prints the string passed to it
 * @str: the string to be printed
 *
 * Return: the number of characters in @str
 */
int put_str(char *str)
{
	int i;

	for (i = 0; str != NULL && str[i] != 0; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
