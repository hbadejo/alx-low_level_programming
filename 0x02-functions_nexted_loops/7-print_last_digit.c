#include "main.h"

/*
 *function name  - Purpose of function
 *
 *Return: What does the function return.
 *
 */

int print_last_digit(int _)
{
	int _i;

	_i = _ % 10;

	if (_i < 0)
		_i = -_i;
	_putchar(_i + '0');
	return (_i);
}
