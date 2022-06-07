#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print from number given up or down to 98
 *
 * Return: return no value
 *
 * @_: function argument
 */
void print_to_98(int _)
{
	int i;

	if (_ == 98)
	{
		printf("%d\n", _);
	}
	else
	{
		if (_ < 98)
		{
			for (i = _; i <= 98; i++)
			{
				if (i != 98)
					printf("%d, ", i);
				else
					printf("%d\n", i);
			}
		}
		else
		{
			for (i = _; i >= 98; i--)
			{
				if (i != 98)
					printf("%d, ", i);
				else
					printf("%d\n", i);
			}
		}
	}
}
