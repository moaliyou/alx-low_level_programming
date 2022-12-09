#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character1;
	char character2;

	character1 = 'a';
	while (character1 <= 'z')
	{
		putchar(character1);
		character1 += 1;
	}
	character2 = 'A';
	while (character2 <= 'Z')
	{
		putchar(character2);
		character2 += 1;
	}
	putchar('\n');
	return (0);
}
