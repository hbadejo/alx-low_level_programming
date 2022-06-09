#include "main.h"

/**
 * print_diagonal - Print Diagonal line
 * @_: Function argument
 * Return: returns no value
 */
void print_diagonal(int _)
{
	int i = 0, c;

	while (i < _ && _ > 0)
	{
		c = 0;
		while (c < i)
		{
			_putchar(' ');
			c++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
