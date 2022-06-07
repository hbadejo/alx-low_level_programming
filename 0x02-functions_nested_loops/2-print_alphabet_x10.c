#include "main.h"

/**
 * print_alphabet_x10 - Print ASCII characters
 *
 * Return: returns no value
 */
void print_alphabet_x10(void)
{
	int _, _i;

	for (_ = 0; _ < 10; _++)
	{
		for (_i = 97; _i < 123; _i++)
		{
			_putchar(_i);
		}
		_putchar('\n');
	}
}
