#include "main.h"

/**
 * puts_half - prints last half of the string
 * @str: Pointer variable
 *
 *Return: Nothing
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}

