#include "main.h"

/*
 *function name  - Purpose of function
 *
 *Return: What does the function return.
 *
 */

#define MAX 10

void times_table(void)
{
	int a, b, mutiplication;

	for (a = 0; a <MAX; a++)
	{
		for (b = 0; b < MAX; b++)
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
				_putchar(' ' );
				_putchar((multiplication / MAX) + '0');
				_putchar((multiplication % MAX) + '0');
			}
		}
		_putchar('\n');
	}
}
