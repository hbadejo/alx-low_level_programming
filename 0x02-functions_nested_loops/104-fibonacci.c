#include <stdio.h>

/**
 * main - Print the first 98 terms of Fibonacci sequence
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int _, _i = 1, _j = 2, _k, _l, _m, _n;

	printf("%lu", _i);

	for (_ = 1; _ < 91; _++)
	{
		printf(", %lu", _j);
		_j += _i;
		_i = _j - _i;

	}

	_k = _i / 1000000000;
	_l = _i % 1000000000;
	_m = _j / 1000000000;
	_n = _j % 1000000000;

	for (_ = 92; _ < 99; _++)
	{
		printf(", %lu", _m + (_n / 1000000000));
		printf("%lu", _n % 1000000000);
		_m = _m + _k;
		_k = _m - _k;
		_n = _n + _l;
		_l = _n - _l;
	}

	printf("\n");

	return (0);
}
