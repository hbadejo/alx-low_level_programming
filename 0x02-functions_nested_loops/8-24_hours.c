#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: return values
 */
void jack_bauer(void)
{
	int _, _i;

	for (_ = 0; _ < 24; _++)
	{
		for (_i = 0; _i < 60; _i++)
		{
			_putchar((_ / 10) + '0');
			_putchar((_ % 10) + '0');
			_putchar(':');
			_putchar((_i / 10) + '0');
			_putchar((_i % 10) + '0');
			_putchar('\n');
		}
	}
}
