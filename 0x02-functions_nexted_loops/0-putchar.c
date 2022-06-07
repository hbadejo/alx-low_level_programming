#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char test[9] = "_putchar";
	int _;

	for (_ = 0; _ < 8; _++)
	{
		_putchar(test[_]);
	}
	_putchar('\n');
	return (0);
}
