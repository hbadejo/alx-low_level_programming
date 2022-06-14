#include "main.h"

/**
 * print_rev - Print Reversed string
 * @s: Pointer variable for string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

