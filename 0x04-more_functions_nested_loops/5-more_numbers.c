#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: returns no value
 */
void more_numbers(void)
{
	char c, d;
	int _ = 0;

	while (_ < 10)
	{
		for (d = 0; d <= 14; d++)
		{
			c = d;
			if (d > 9)
			{
				_putchar('1');
				c = d % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
		_++;
	}
}
