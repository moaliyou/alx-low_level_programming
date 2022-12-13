#include "main.h"

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
