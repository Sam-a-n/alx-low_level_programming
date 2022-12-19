#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int one;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (one = longi; one > 0; one--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
