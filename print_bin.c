#include"main.h"
/**
 * _print_bin - prints a binary numbers.
 * @args: number of arguments.
 * Return: count.
 *
 */

int _print_bin(va_list args)
{
	int count;
	int num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	int binary[32];
	int i = 0;

	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		_putchar('0' + binary[j]);
	}
	count++;
	return (count);
}
