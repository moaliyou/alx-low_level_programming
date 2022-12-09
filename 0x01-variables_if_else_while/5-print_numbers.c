#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	numbers = 0;
	while (numbers < 10)
	{
		printf("%d", numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
