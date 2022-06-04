#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _ = 'a', _i = 0;

	while (_i <= 25)
	{
		if (_ != 'q' && _ != 'e')
		{
			putchar(_);
		}
		_++, _i++;
	}
	putchar('\n');
	return (0);
}
