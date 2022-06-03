#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _ = 'a', __ = 'A';

	while (_ <= 'z')
	{
		putchar(_);
		_++;
	}
	while (__ <= 'Z')
	{
		putchar(__);
		__++;
	}
	putchar("\n");
	return (0);
}
