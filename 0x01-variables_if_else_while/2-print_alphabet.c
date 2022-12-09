#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    char character;

    character = 'a';

    while (character <= 'z')
    {
        putchar(character);

        character = character + 1;
    }


putchar('\n');

    return (0);
}
