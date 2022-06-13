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

	for (i = 0; str[i] != '\0'; i++)
		;

	while (i--)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

