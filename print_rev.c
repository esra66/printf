#include"main.h"
/**
 * _print_rev - prints string in reverse.
 * @args: number of arguments.
 * Return: length.
 */

int _print_rev(va_list args)
{
	const char *s = va_arg(args, const char*);
	int length = _strlen(s);
	int rever = length - 1;

	while (rever >= 0)
	{
		_putchar(s[rever]);
		rever--;
	}
	return (length);
}

