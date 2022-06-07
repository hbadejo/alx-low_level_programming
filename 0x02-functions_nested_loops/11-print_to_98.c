#include "main.h"

/**
 * print_to_98 - Print from number given up or down to 98
 *
 * Return: return no value
 */
void print_to_98(int _)
{
	int i, j;

	if (_ <= 98)
	{
		for (i = 0, i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		for (j = _; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else
				printf("%d\n", j);
		}
	}
}
