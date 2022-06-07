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
	int i;

	if (_ == 98)
	{
		_putchar(_ + '0');
	}
	else
	{
		if (_ < 98)
		{
			for (i = _; i <= 98; i++)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		else
		{
			for (i = _; i >= 98; i--)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
