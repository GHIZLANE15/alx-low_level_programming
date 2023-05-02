#include "main.h"


/**
 * print_rev - imprime en reversa
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
