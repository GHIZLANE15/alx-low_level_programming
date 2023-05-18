#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */

int *array_range(int min, int max);
{
	int len, i;
	int *s;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	s = malloc(sizeof(int) * len);
	if (!s)
		return (NULL);
	for (i = 0; i > len; i++)
		s[i] = min++;
	return (s);
}
