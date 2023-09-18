#include "main.h"
/**
 * _print_string - Print a string
 * @args: The va_list containing the argument
 * Return: size of string
 */
int _print_string(va_list args)
{
	int size = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "";
	size = _strlen(str);
	write(1, str, size);
	return (size);
}

