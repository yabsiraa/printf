#include "main.h"
#include<stdio.h>
/**
 * _printf - clone of the function printf in stdio.h
 * @format: the string to be printed along with format specifiers preceded by %
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int char_count = 0; /* Total number of chars printed to stdout */
	va_list ap; /* Contains the list of arguments passed after format */
	int i; /* Used to loop through all characters in format */

	va_start(ap, format);

	for (i = 0; format != NULL && format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_count++;
			continue;
		}

		if (format[i + 1] == '\0')
		{
			_putchar('%');
			char_count++;
			break;
		}

		char_count += get_printing_func(format[i + 1], &ap);
		i++;
	}
	return (char_count);
}
