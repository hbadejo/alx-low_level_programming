#include "main.h"

/**
 * print_alphabet - Print a - z
 *
 * Return: returns void
 */
void print_alphabet(void)
{
	char _ = 'a';

	while (_ <= 'z')
	{
		_putchar(_);
		_++;
	}
	_putchar('\n');
}
