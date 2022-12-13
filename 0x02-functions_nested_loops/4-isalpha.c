/**
 * _isalpha - function that checks for alphabetic character
 * @c: the value of character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
