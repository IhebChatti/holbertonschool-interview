#include "palindrome.h"

/**
 * is_palindrome - check if an integer is palindrome
 * @n: number to be checked
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(unsigned long n)
{
	int r, sum = 0, temp;

	temp = n;
	while (n > 0)
	{
		r = n % 10;
		sum = (sum * 10) + r;
		n /= 10;
	}
	if (temp == sum)
		return (1);
	else
		return (0);
}
