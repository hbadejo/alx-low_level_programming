#include "main.h"

/**
 * print_to_98 - Print from number given up or down to 98
 *
 * Return: return no value
 *
 * @_: function argument
 */
void print_to_98(int _)
{
	int i, j;

	if (_ == 98)
	{
		_putchar('_');
	}
	else
	{
		if (_ < 98)
		{
			for (i = _; i <= 98; i++)
			{
				_putchar('i');
			}
		}
		else
		{
			for (i = _; i >= 98; i--)
			{
				-putchar('i');
			}
		}
	}
}
