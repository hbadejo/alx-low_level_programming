#include <stdio.h>

/**
 * main - Print natural number below 1024 divisible by 5 and 3
 *
 * Return: Return print
 */
int main(void)
{
	int i, j = 0;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	printf("%d\n", j);
	return (0);
}
