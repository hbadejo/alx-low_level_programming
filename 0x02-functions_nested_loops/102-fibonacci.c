#include <stdio.h>

/**
 * main - 1st to 50th term of Fibonacci Sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int _, _i, _j, _r;

	_i = 1;
	_j = 2;

	printf("%lu, %lu, ", _i, _j);

	for (_ = 0; _ < 48; _++)
	{
		_r = _i + _j;
		if (_ == 47)
			printf("%lu\n", _r);
		else
			printf("%lu, ", _r);

		_i = _j;
		_j = _r;
	}
	return (0);
}
