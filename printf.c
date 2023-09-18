#include "main.h"
/**
 * _printf - cuztomied printf function
 * @format: list of arguments
 * Return: number of char been printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int i = 0;
	unsigned int j = 0;
	va_list args;

	formatspecifier s[] = {
		{'c', _print_char}, {'s', _print_string}, {'d', _print_deci},
		{'i', _print_int}, {'x', _print_lowhex}, {'X', _print_upperhex},
		{'o', _print_oct}, {'%', _print_perc}, {'u', _print_unisg},
	};

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0 ; format[i] != '\0' ; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
	
	else
	{
		i++;
		for (j = 0 ; j < sizeof(s) / sizeof(s[0]) ; j++)
		{
			if (s[j].specifier == format[i])
			{
				count += s[j].function(args);
				break;
			}
		}
	}
	}
	va_end(args);
	return (count);
}
