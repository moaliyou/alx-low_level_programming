#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    char character1, character2;

    character1 = 'a';

    while (character1 <= 'z')
    {
        putchar(character1);

        character1 = character1 + 1;
    }

    character2 = 'A';

    while (character2 <= 'Z')
    {
        putchar(character2);

        character2 = character2 + 1;
    }

    putchar('\n');

    return (0);
}
