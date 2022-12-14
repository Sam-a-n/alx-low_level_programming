#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;

	l = n % 10;

	if (l < 0)
		l = -l;

	_puchar(l + '0');

	return (l);
}
