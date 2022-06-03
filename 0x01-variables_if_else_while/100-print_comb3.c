#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int inVar, ouVar;

	for (ouVar = 0; ouVar <= 99; ouVar++)
	{
		for (inVar = 0; inVar <= 99; inVar++)
		{
			if (inVar / 10 % 10 > inVar % 10)
				break;
			invar /= 10;
			if (inVar == 0)
			{
				if ((ouVar % 11) != 0 && ouVar != 11)
				{
					putchar((ouVar / 10) + '0');
					putchar((ouVar % 10) + '0');
					if (ouVar < 89)
					{
						putchar(',');
						putchar(' ');
					}
				}
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
