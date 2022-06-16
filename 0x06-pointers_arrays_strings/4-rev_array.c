#include <string.h>
#include "main.h"

/**
 * reverse_array - Reverse array
 * @a: Pointer array variable
 * @n: Array index
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int _i = 0, _j = n - 1, tmp;

	while (_i < _j)
	{
		tmp = a[_i];
		a[_i] = a[_j];
		a[_j] = tmp;
		_i++;
		_j--;
	}
}

