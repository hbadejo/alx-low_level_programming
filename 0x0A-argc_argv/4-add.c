#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This Program prints the name of the program
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: An integer
 */
int main(int argc, char **argv)
{
	int add = 0, j, i;

	if (argc < 2)
		printf("%d\n", 0);

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				printf("Value of argv[%d][%d] = %c\n", i, j, argv[i][j]);
				if (argv[i][j] > '9' || argv[i][j] < '0')
				{
					puts("Error");
					return (1);
				}
			}
		}

		i = 0;

		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
