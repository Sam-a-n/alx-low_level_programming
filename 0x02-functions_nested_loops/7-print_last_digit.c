#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
		l *= -1;

	_putchar(l + '0');

	return (0);
}
