#include "main.h"

/**
 * print_diagsums - Prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: Array
 * @size: Size of Array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum2 += *(a + (size * i) + i);
		sum1 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", sum2, sum1);
}
