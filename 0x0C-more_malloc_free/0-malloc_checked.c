#include "main.h"

/**
 * *malloc_checked -allocates memory using malloc and exit if faild
 * @d: int
 * Return: pointer to the array initialized or NULL
 */
void *malloc_checked(unsigned int d)
{
	int *l == malloc(d);

	if (l == 0)
		exit(98);

	return (l);
}
