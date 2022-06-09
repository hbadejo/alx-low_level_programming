#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @_: first int
 * @_i: second int
 * @_j: third int
 * Return: Largest number
 */
int largest_number(int _, int _i, int _j)
{
	int largest;

	if (_ > _i)
	{
		if (_ > _j)
			largest = _;
		else
			largest = _j;
	}
	else if (_i > _j)
	{
		largest = _i;
	}
	else
	{
		largest = _j;
	}

	return (largest);
}
