#include"main.h"
/**
 * _print_s - prints a string
 * @args: number of arguments
 * Return: number of characters
 */

int _print_s(va_list args)
{
	const char *str = va_arg(args, const char*);
	int length = 0;

	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar("0123456789ABCDEF"[(*str >> 4) & 0xF]);
			_putchar("0123456789ABCDEF"[*str & 0xF]);
			length += 4;
		}
		else if (*str == '\n')
		{
			_putchar(' ');
			length++;
		}
		else
		{
			_putchar(*str);
			length++;
		}
		str++;
	}

	return (length);
}
