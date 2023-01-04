#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string measured
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s)
	{
		leng++;
		leng += _strlen_recursion(s + 1);
	}

	return (leng);
}
