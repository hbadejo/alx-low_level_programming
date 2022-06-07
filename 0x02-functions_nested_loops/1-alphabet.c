#include "main.h"

/*
 *function name  - Purpose of function
 *
 *Return: What does the function return.
 *
 */

void print_alphabet(void)
{
	char _ = 'a';

	while (_ <= 'z')
	{
		_putchar(_);
		_++;
	}
	_putchar('\n');
}
