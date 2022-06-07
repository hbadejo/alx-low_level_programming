#include "main.h"

/*
 *function name  - Purpose of function
 *
 *Return: What does the function return.
 *
 */

#define MAX 10

void print_times_table(int _)
{
	int a, b, mutiplication;

	for (a = 0; a < _; a++)
	{
		for (b = 0; b < _; b++)
		{
			if (!(_ < 0 || _ > 15))
			{
				multiplication = b * a;

				if (b == 0)
					_putchar(multiplication + '0');
				if (multiplication < MAX && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(multiplication + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multiplication / MAX) + '0');
					_putchar((multiplication % MAX) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
