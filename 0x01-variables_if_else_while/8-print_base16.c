#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success)
 */
int main(void)
{
	int _ = 0;
	char _c = 'a';

	while (_ < 16)
	{
		if (_ < 10)
		{
			putchar(_ + '0');
		}
		else
		{
			putchar(_c);
			_c++;
		}
		_++;
	}
	putchar('\n');
	return (0);
}

