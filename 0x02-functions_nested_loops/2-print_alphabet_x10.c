#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int t;
	char l;

	for (t = 0; t <= 9; t++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
