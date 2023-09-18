#include "main.h"
/**
 * _print_oct - function print octal number
 * @args: va list argument
 * Return: count for string
 */

int _print_oct(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	char octal[100];
	int i = 0;
	int j;

	do {
		octal[i++] = (n % 8) + '0';
		n = n / 8;
	} while (n != 0);
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octal[j]);
		count++;
	}

	return (count);
}
