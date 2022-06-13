#include "main.h"

/**
 * swap_int- Swap variable values
 * @a: First pointer value passed
 * @b: The second value pointer passed
 *
 * Return: returns void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

