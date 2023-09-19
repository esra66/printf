#include"main.h"

/**
 * _print_ro13 - prints a string in ro13
 * @args: number of arguments
 * Return: counter
 */

int _print_ro13(va_list args)
{
	int l = 0;
	int m;
	int counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM\0"};

	if (s == NULL)
		s = "(null)";

	while (s[l])
	{
		k = 0;
		m = 0;
		while (alpha[m] && !k)
		{
			if (s[l] == alpha[m])
			{
				_putchar(beta[m]);
				counter++;
				k = 1;
			}
			m++;
		}
		if (!k)
		{
			_putchar(s[l]);
			counter++;
		}
		l++;
	}

	return (counter);
}
