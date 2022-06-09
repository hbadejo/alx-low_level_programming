#include "main.h"

/**
 * print_square - Function prints a perfect square
 * @_:  Function argument - Size of the square
 * Return: returns no value
 */
void print_square(int _)
{
	int _i, _j;

	if (_ > 0)
	{
		for (_i = 0; _i < _; _i++)
		{
			_j = 0;
			while (_j < _)
			{
				_putchar('#');
				_j++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
