#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _ = 0;

	while (_ < 10)
	{
		putchar(_ + '0');
		if (_ < 9)
		{
			putchar(',');
			putchar(' ');
		}
		_++;
	}
	putchar('\n');
	return (0);
}
