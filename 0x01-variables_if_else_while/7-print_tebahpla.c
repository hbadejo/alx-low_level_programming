#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _ = 'z';

	while (_ >= 'a')
	{
		putchar(_);
		_--;
	}
	putchar('\n');
	return (0);
}
