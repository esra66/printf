#include "main.h"
/**
 * _print_upperhex - print upper hexadecimal numbers
 * @args: number of arguments
 * Return: count
 */

int _print_upperhex(va_list args)
{

	unsigned int n = va_arg(args, unsigned int);
	char hex[100];
	int i = 0;
	int remainder;
	int count, j;

	do {
		remainder = n % 16;
		hex[i++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
		n = n / 16;

	} while (n != 0);

	count = 0;
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
		count++;
	}


	return (count);
}
