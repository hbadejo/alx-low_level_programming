#include "main.h"

/*
 *function name  - Purpose of function
 *
 *Return: What does the function return.
 *
 */

void jack_bauer(void)
{
	int _, __;

	for (_ = 0; _ < 24; _++)
	{
		for (__ = 0; __ < 60; __++)
		{
			_putchar((_ / 10) + '0');
			_putchar((_ % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
