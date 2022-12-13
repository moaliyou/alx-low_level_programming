#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: the value of the given integer number
 *
 * Return: the last digit of the given number
 */
int print_last_digit(int n)
{
	int remainder = n % 10;

	_putchar(remainder);
	return (remainder);
}
