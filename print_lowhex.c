#include"main.h"
/**
 * _print_lowhex - prints a hexadecimal number.
 * @args: number of arguments.
 * Return: counter.
 */

int _print_lowhex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	int count = 0;
	int j;
	char hex[100];
	int i = 0;

	do {
		int remainder = n % 16;

		hex[i++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'a');
		n = n / 16;

	} while (n != 0);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
		count++;
	}

	return (count);
}
