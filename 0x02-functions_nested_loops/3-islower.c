/**
 * _islower - a function that checks for lowercase character
 *
 * 'c' _islower - the value of character
 *
 * Return: 1 if True else 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
