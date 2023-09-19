#include"main.h"
/**
 * _print_rev - prints string in reverse.
 * @args: number of arguments.
 * Return: length.
 */

int _print_rev(va_list args)
{
	const char *s = va_arg(args, const char*);
	int length = 0;
	int i;

	if (s == NULL)
	{
		return (-1);
	}

	length = _strlen(s);

	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	return (length);
}
