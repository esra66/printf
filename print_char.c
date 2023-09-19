#include "main.h"
/**
 * _print_char - Print a character
 * @args: The va_list containing the argument
 * Return: pointer to the character count
 */
int _print_char(va_list args)
{
	char x = va_arg(args, int);

	_putchar(x);
	return (1);
}

