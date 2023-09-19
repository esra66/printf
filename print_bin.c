#include"main.h"
/**
 * _print_bin - prints a binary numbers.
 * @args: number of arguments.
 * Return: count.
 *
 */
int _print_bin(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int flag = 1;
	int bit, i;

	for (i = 31; i >= 0; i--)
	{
		bit = (num >> i) & 1;

		if (bit)
			flag = 0;

		if (!flag || i == 0)
		{
			_putchar('0' + bit);
			count++;
		}
	}

	if (count == 0)
	{
		_putchar('0');
		count = 1;
	}

	return (count);

}
