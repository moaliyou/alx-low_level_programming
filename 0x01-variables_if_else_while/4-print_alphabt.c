#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	character = 'a';
	while (character <= 'z')
	{
		if (character != 'q' && character != 'e')
			putchar(character);
		character += 1;
	}
	putchar('\n');
	return (0);
}
