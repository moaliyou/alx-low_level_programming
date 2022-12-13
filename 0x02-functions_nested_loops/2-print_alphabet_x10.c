#include "main.h"

/**
 * print_alphabet_x10 - function print alphabet in lowercase 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int counter;
	char character;

	counter = 0;
	character = 'a';
	while (counter < 10)
	{
		character = 'a';
		while (character <= 'z')
		{
			_putchar(character);
			character++;
		}
		_putchar('\n');
		counter++;
	}
}
