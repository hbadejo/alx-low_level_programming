#include <stdio.h>

/**
 * main - Sum even valued fibonacci sequence below 4 million
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _;
	unsigned long int _i, _j, _k, _r;

	_i = 1;
	k = 2;
	sum = 0;

	for (_ = 1; _ <= 33; _++)
	{
		if (_i < 4000000 && _i % 2 == 0)
		{
			_r += _i;
		}
		_k = _i + _j;
		_i = _j;
		_j = _k;
	}

	printf("%lu\n", _r);

	return (0);
}
