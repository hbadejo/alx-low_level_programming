#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu.\n", (unsigned char)sizeof(char));
	printf("Size of a int: %lu.\n", (unsigned int)sizeof(int));
	printf("Size of a long int: %lu.\n", (unsigned long int)sizeof(long int));
	printf("Size of a long long int: %lu.\n", (unsigned long long int)sizeof(long long int));
	printf("Size of a float: %lu.\n", (unsigned float)sizeof(float));
	return (0);
}
