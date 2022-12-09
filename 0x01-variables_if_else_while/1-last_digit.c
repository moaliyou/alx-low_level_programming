#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	
	printf("Last digit of %d is ", n);
	if (last_digit > 5)
	{
		printf("%d and is greater than 5", last_digit);
	}
	if (last_digit == 0)
	{
		printf("%d and is 0", last_digit);
	}
	if (last_digit < 6 && last_digit != 0)
	{
		printf("%d and is less than 6 and not 0", last_digit);
	}
	printf("\n");
	return (0);

}
