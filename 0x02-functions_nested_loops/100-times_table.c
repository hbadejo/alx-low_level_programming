#include "main.h"
/**
 * print_times_table - Print multiplcation
 *
 * Return: returns multiplcation table
 *
 * @n: function argument
 */
void print_times_table(int n)
{
	int _, _i, _j;

	if (n >= 0 && n <= 14)
	{
		for (_ = 0; _ <= n; _++)
		{
			for (_i = 0; _i <= n; _i++)
			{
				_j = _ * _i;
				if (_j > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((_j / 100) + '0');
					_putchar(((_j / 10) % 10) + '0');
					_putchar((_j % 10) + '0');
				}
				else if (_j > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((_j / 10) % 10) + '0');
					_putchar((_j % 10) + '0');
				}
				else
				{
					if (_i != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(_j + '0');
				}
			}
			_putchar('\n');
		}
	}
}
