#include "main.h"

/**
 * print_line - Print line equal to argument.
 * @_:  Function argument
 * Return: returns no value
 */
void print_line(int _)
{
	int i = 0;

	while (i < _ && _ > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
