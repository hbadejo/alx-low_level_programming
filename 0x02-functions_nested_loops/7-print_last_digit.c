#include "main.h"

/**
 * print_last_digit - Print the absolute value of last digit of _
 *
 * Return: returns the abs last digit of _
 *
 * @_: function argument
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
