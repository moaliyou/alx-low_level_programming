#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	character = 'A';
	while (character <= 'Z')
	{
		putchar(character);
		character += 1;
	}
	putchar('\n');
	return (0);
}
