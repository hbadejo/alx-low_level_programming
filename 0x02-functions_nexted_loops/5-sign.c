#include "main.h"

/*
 *function name  - Purpose of function
 *
 *Return: What does the function return.
 *
 */

int print_alphabet(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
