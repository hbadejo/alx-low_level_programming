#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _ = 'a';

	while (_ <= 'z')
	{
		if (_ == 'q' || _ == 'e')
			continue;
		putchar(_);
		_++;
	}
	putchar("\n");
	return (0);
}
