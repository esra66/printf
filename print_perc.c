#include"main.h"

/**
 *_print_perc - print %
 * @args: arguments
 * Return: number of characters.
 */
int _print_perc(va_list args)
{
	char mod, perc;

	(void)args;
	mod = '%';
	perc = write(1, &mod, 1);
	return (perc);
}

