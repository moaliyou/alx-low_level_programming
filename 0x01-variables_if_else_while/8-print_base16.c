#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char n;

	ch = 97;
	n = 48;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (ch < 103)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
